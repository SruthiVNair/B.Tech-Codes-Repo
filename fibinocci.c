#include<stdio.h>
main()
{
int a,b,c,n,m;
n=m;
printf("upto which no. fibinocci series has to be printed?");
scanf("%d",&n);
a=0;  
b=1;
printf("%d\n%d\n",a,b);
for(m=3;m<=n;m++)
{c=a+b;
printf("%d\n",c);
a=b;
b=c;
}}
