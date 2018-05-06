#include<stdio.h>
main()
{
int a,n,d,s=0;
printf("the no. n is");
scanf("%d",&n);
while (n>0)
{
d=n%10;
s=s+d;
n=n/10;
}
printf ("the sum is %d",s);
}
