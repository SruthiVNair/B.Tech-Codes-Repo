#include<stdio.h>
main()
{
int beg,mid,end,n,i,element,a[20],flag=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the sorted list");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
beg=0;
end=n-1;
printf("enter the no:to be checked");
scanf("%d",&element);
while(beg<=end)
{
mid=(beg+end)/2;
if(element==a[mid])
{
flag=1;
break;}
if(element>a[mid])
beg=mid+1;
else if(element<a[mid])
end=mid-1;
}
if(flag==1)
printf("the no.is present in the position %d",mid+1);
else 
printf("not present");
}
