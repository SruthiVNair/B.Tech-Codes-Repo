#include<stdio.h>
#include<math.h>
main()
{
int a,b;
printf ("the number is" );
scanf ("%d",&a);
b=a%7;
if (b==0)
{
printf ("the number is divisible by 7");
}
else
printf ("not divisible by 7");
}
