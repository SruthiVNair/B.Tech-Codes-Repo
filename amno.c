#include<stdio.h>
main()
{
int s=0,a,n,d ;
printf("the  no. n is");
scanf("%d",&n);
a=n;
while (n>0)
{
d=n%10;
s=s+(d*d*d);
n=n/10;
}
if(s==a)
printf("the no.is amstrong %d",a);
else
printf("the no.is not amstrong %d",a);
}           
