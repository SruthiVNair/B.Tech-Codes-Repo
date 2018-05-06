#include<stdio.h>
main()
{
int a[10],i,n=0,p=0,z=0,s  ;
printf("enter the number");
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
if (a[i]==0)
z++;
if(a[i]>0)
p++;
else if(a[i]<0)
n++;
}
printf("\n the positive numbers are %d",p);
printf("\n the negative numbers are %d",n);
printf("\n the number is zero %d",z);
}
