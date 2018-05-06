#include<stdio.h>
main()
{
void sum(int,int);
int a,b;
printf("enter the no.s");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int a,int b)
{
int s;
s=a+b;
printf("%d",s);
}
