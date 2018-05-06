#include<stdio.h>
#include<math.h>
main()
{
int a,i=1,b,s=0;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
b=a%2;
s=s+(i*b);
i=i*10;
a=a/2;
}
printf("%d",s);
}
