#include<stdio.h>
main()
{
int n,m,i,s=0,r;
printf("enter the number");
scanf("%d",&n);
m=n;
for(i=1;i<=n/2;i++)
{
r=n%i;

if(r==0)
s=s+i;
}
if(s==m)
printf(" %d is perfect no.",m);
else
printf("non perfect no.");
}
