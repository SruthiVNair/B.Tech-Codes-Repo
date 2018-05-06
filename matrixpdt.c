#include<stdio.h>
main()
{
int a[20][20],b[20][20],c[20][20],i,j,p,q,m,n,k;
printf("enter the order of first matrix");
scanf("%d%d",&m,&n);
printf("enter the order of second matrix");
scanf("%d%d",&p,&q);
if (m==q)
{
printf("enter the elements of first matrix");
for (i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("enter the elements of second matrix");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<q;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[i][j]);
}}}
printf("the required matrix is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("%d\t",c[i][j]);
}
}
else
printf(" matrix addition is impossible");
}
