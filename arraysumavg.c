#include<stdio.h>
main()
{
int a[50],n,i      ;
float s=0,avg;
printf("enter the no:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
avg=s/n;
printf("%f and %f are the sum and average ",s,avg);
}
