#include<stdio.h>
main()
{
int a[10][10],i,j,p,q,f=0;
printf("enter the order ");
scanf("%d%d",&p,&q);
printf("enter the elements");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
for(i=0;i<p;i++)
for(j=0;j<q;j++)
if(i=j)
{
if(a[i][j]==1)
f=1;
break;
if(i!=j)

if(a[i][j]==0)
f=1;
break;
}
if(f==1)
printf("unitmatrix");
else printf("not");
}
