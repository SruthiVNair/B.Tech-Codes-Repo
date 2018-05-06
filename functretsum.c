#include<stdio.h>
main()
{
int sum(int,int);
int a,b,d;
printf("enter the no.s");
scanf("%d%d",&a,&b);
d=sum(a,b);
printf("%d",d);
}
int sum(int a,int b)
{
int s;
s=a+b;
return(s);
}
