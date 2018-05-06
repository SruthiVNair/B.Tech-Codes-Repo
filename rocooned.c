#include<stdio.h>
main()
{
int a[10][10],i,j,p,q,b[i],c[j];
printf("enter the order of the matrix");
scanf("%d%d",&p,&q);
printf("enter the elements of the matrix");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
for(i=0;i<p;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("%d    ",a[i][j]);}
printf("\n");
for(i=0;i<p;i++)
{b[i]=0;
for(j=0;j<q;j++)
{
b[i]=b[i]+a[i][j];
}
printf("Row sum of %d row is %d\n",i+1,b[i]);
}
for(j=0;j<q;j++)
{c[j]=0;
for(i=0;i<p;i++)
{
c[j]=c[j]+a[i][j];}
printf("Column sum of %d column is %d\t",j+1,c[j]);}
}
