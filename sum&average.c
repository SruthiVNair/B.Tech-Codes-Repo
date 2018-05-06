#include<stdio.h>
main()
{
float a=0,s=0,avg,n;
printf("the n no.s are");
scanf("%d",&n);
while (n>=0)
{
printf("enter the no.");
scanf("%d",&a);
s=s+a;
n=n-1;
}
avg=s/n;
printf("the sum is %d and the average is %d");
}
