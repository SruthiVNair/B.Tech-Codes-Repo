#include<stdio.h>
#include<string.h>
main()
{
char str1[30],str2[30];
int i,j,l;
printf("enter the word");
gets(str1);
l=strlen(str1);
for (i=0,j=l-1;str1[i]!='\0';i++,j--)
{
str2[i]=str1[j];
}
str2[i]='\0';
if(strcmp(str1,str2)==0)
printf("the given string is pallindrome");
else
printf("not pallindrome");
}
