#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,d,q,x,y;
printf("the three numbers are ");
scanf("%f%f%f",&a,&b,&c);
d=(float)b*b-4*a*c;
if(d==0)
{
 printf("The roots are equal");
  x=(float)-b/2*a;}
else
if(d>0)   
{
q=(float)sqrt(d);
printf("%f\n",q);
x=(float)(-b+q)/2*a;
printf("the root%f\n",x);
y=(float)(-b-q)/2*a;
printf("the root%f\n",y);
}
else
 printf("the roots are imaginary");}
