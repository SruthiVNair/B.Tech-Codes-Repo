#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int keyword(char buf[])
{
	char key[20][10]={"void","int","printf","scanf","if","else","else if","switch","for"};

	int i,f=0;
	for(i = 0; i < 20; i++)
	{
        	if(strcmp(key[i],buf) == 0)
		{
           	 f = 1;
            	 break;
        }
	}
return f;
}
int main()
{
	char ch, buf[15], op[] = "+-*/%=";
   	FILE *fp;
    	int i,j=0;
	fp = fopen("pgm.txt","r");
	if(fp == NULL)
	{
       		 printf("error...\n");
       		 exit(0);
   	}
    	while((ch = fgetc(fp)) != EOF)
	{
           for(i = 0; i < 6; i++)
	   {
               if(ch == op[i])
               printf("%c is operator\n", ch);
           }
	   if(isalpha(ch))
	   {
               buf[j++] = ch;
           }
	
 	else if((ch == ' ' || ch == '\n'||(ch =='(')) && (j != 0))
	{
                   buf[j] = '\0';
                   j = 0;
                                      
                   if(keyword(buf) == 1)
                       printf("%s is keyword\n", buf);
                   else
                       printf("%s is identifier\n", buf);
           }
	else if(isdigit(ch))
	{
		printf("%d is constant\n",ch-48);
	}
          } 
	fclose(fp);
    return 0;
}
