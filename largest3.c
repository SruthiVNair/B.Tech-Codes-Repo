#include<stdio.h>
main()
{
int a,b,c;
printf("the three no.s are");
scanf ("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is largest",a);
}
if(b>c&&b>c)
{
printf("%d is greater",b);
}
else
printf("%d is greater",c);
}
