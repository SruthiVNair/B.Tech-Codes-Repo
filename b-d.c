#include<stdio.h>
#include<math.h>
main()
{
int a,b,s=0,r,i;
printf("enter the no.");
scanf("%d",&a);
for(i=0;i<=20&&a>0;i++)
{
r=a%10;
a=a/10;
b=r*pow(2,i);
s=s+b;
}
printf("%d",s);
}
