#include<stdio.h>
main()
{
int rev=0,n,r,m;
printf("enter the value of n");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
if(rev==m)
printf("%d is pallindrome",m);
else
printf("it is not pallindrome");
}
