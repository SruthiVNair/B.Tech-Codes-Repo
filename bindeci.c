#include<stdio.h>
main()
{
int a,s=0,r,i=1;
printf("enter the no.");
scanf("%d",&a);
while(a>0)
{
r=a%2;
s=s+(i*r);
i=i*10;
a=a/2;
}
printf("%d",s);
}

