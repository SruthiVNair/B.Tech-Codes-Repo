#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,s,t;
printf("sides of the triangle are");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
t=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area is %d\n",t);
}
