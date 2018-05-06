#include<stdio.h>
main()
{
float a=0,s=0,avg,n,m;
printf("the n no.s are");
scanf("%f",&n);
m=n;
while (n>0)
{
printf("enter the no.");
scanf("%f",&a);
s=s+a;
n=n-1;
}
avg=s/m;
printf("the sum is %f and the average is %f",s,avg);
}
