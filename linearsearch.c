#include<stdio.h>
main()
{
int a[10],i,n,s ,f=0;
printf("enter the no.s");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the no. to be checked");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if (a[i]==s)
{
f=1;
break;}}
if(f==1)
printf("the %d is present in the position %d",s,i+1);
else 
printf("the no. is not present");
}

