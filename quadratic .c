#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,d,q,x,y;
printf("the three numbers are ");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
 printf("The roots are equal");
  x=-b/2*a;}
else
if(d>0)
{
q=sqrt(d);
x=(-b+d)/2*a;
printf("%f",x)
y=(-b-d)/2*a;
printf("%f",y)
}
else
 
printf("the roots are imaginary");}

