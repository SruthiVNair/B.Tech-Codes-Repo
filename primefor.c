#include<stdio.h>
main()
{
int n,r,c=0,i;
for(i=2;i<=100;i++)
{
c=0;
for(n=2;n<=i/2 ;n++)
{
r=i%n;
if(r==0)
{
c++;
break;}
}
if (c==0)
printf("%d\n",i);
}}
