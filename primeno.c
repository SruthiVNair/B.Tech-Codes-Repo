#include<stdio.h>
main()
{
int a,c=0,i;
printf("enter the no.");
scanf("%d",&a);
for(i=2;i<=a/2;i++){
if(a%i==0)
c++;
}
if (c==0)
printf("is prime no.");
else
printf("not prime");
}
