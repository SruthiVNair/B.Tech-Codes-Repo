#include<stdio.h>
main()
{
int i,s=1;
for (i=2;i<=100;i++)
{
if(i%2==0)
s=s-i;
else
s=s+i;
}
printf("the sum is %d",s);
}
