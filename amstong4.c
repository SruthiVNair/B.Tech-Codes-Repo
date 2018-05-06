#include<stdio.h>
main()
{
int b,n,s=0,d;
for(n=1;n<=1000;n++)
{b=n;
s=0;
while(b>0)
{
d=b%10;
s=s+(d*d*d);
b=b/10;
}
if(s==n){

printf("%d\n",n);
}}}
