-#include<stdio.h>
main()
{
int d,ans=0,i=0,n;
printf("enter the no.");
scanf("%d",&n);
while(n>0)
{
d=n%10;
if(d==0)
i++;
ans=(ans*10)+d;
n=n/10;
}
while(ans>0)
{
 
d=ans%10;
 
switch(d)
{
case 0:printf("zero");
i--;
break;
case 1:printf("one");
break;
case 2:printf("two");
break;
case 3:printf("three");
break;
case 4:printf("four");
break;
case 5:printf("five");
break;
case 6:printf("six");
break;
case 7:printf("seven");
break;
case 8:printf("eight");
break;
case 9:printf("nine");
break;
}
ans=ans/10;}
while(i>0)
{
printf("zero");
i--;}}
