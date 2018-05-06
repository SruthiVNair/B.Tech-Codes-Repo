#include<stdio.h>
main()
{
int a[50],n,i,l,s  ;
printf("enter the no.");
scanf("%d",&n);
printf("enter the total numbers");
for(i=0;i<n;i++)
{
scanf ("%d",&a[i]);
}
l=a[0];
s=a[0];
for(i=0;i<n;i++)
{
if(a[i]>l)
l=a[i];
if(a[i]<s)
s=a[i];
}
printf("%d is the largest no. and %d is smallest no.",l,s);
}
