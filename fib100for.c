#include<stdio.h>
main()
{
int a=0,b=1,n,c;
for(n=1;n<=10;n++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}}
