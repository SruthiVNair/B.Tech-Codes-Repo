#include<stdio.h>
main()
{
int a=1,b;
a=1;
b:
if(a<=10)
{
printf("%d\n",a);
a=a+1;
goto b;
}}
