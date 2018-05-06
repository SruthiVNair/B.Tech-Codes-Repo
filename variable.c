#include<stdio.h>
main()
{
int a,b;
printf("the two numbers are");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d\n%d\n",a,b);
}
