#include<stdio.h>
main()
{
int i,j,a[50],n,temp  ;
printf("enter the no.");
scanf("%d",&n);
printf("enter the numbers");
for(j=0;j<n;j++)
{
for(i=0;i<;i++)
scanf("%d",&a[i]);
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}}
