#include<stdio.h>
main()
{
int sum(int[],int);
int a[20],n,i,s;
printf("enter the limit");
scanf("%d",&n);
printf("enter the no.s");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
s=sum(a,n);
printf("%d",s);
}
int sum(int a[],int n)
{
int s=0,i;
for(i=0;i<n;i++)
s=s+a[i];
return(s);
}
