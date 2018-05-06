#include<stdio.h>
main()
{

char str[20];
int i,count=0,n;

printf("enter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
switch(str[i])
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
 count++;
}}
printf("%d",count);
}
