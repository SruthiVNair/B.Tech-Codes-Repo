#include<stdio.h>
main()
{
int n,a,f;
printf("the number whose factorial is to be found out is");
scanf("%d",&n);
a=1,f=1;
g:
if (a<=n)
{
f=f*a;
a=a+1;
goto g;
}
printf ("the factorial of %d is%d",n,f);
}
