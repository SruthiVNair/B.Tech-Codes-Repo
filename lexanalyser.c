#include<stdio.h>
#include<math.h>
#include<string.h>
int keyword(char buf[])
{
char key[20]={"void","int","printf","scanf","if","else","else if","switch","for"};
int i,f;
for(i=0;i<20;i++)
{
if(strcmp(key[i],buf)==0)
{
f=1;
break;
}
}
return f;
}
main()
{
char ch,buf[15],op[]="+,-,/*";
FILE *fp;
int i,j=0;
fp=fopen("pgm.txt","r");
if(fp == NULL)
	{
       		 printf("error...\n");
       		 exit(0);
   	}
while(ch=' '||)
}
