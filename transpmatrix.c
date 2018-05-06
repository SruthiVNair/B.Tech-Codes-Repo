#include<stdio.h>
main()
{
int a[10][10],i,j,p,q;
printf("enter the order of the matrix");
scanf("%d%d",&p,&q);
printf("enter the elements of the matrix");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&a[i][j]);
}}
for(i=0;i<q;i++)
{printf("\n");
for(j=0;j<p;j++)
{
printf("%d\t",a[j][i]);
}
}}
