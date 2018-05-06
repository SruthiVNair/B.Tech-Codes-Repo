#include<stdio.h>
main()
{
int i,j,p,q,a[20][20];
printf("enter the order of the matrix");
scanf("%d%d",&p,&q);
if(p==q)
{
printf("the unit matrix is ");
for(i=0;i<p;i++)
for(j=0;j<q;j++)

if(i==j)
a[i][j]=1;
else
a[i][j]=0;

for(i=0;i<p;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("%d\t",a[i][j]);
}}}
