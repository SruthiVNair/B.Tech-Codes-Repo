#include<stdio.h>
main()
{
int a[10][10],i,s=0,m,n,j;
printf("enter the order");
scanf("%d%d",&n,&m);
printf("enter the elements of the matrix");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);}
for(i=0;i<n;i++)

for(j=0;j<m;j++)

if(i==j){
s=s+a[i][j];
}
printf("%d",s);
}

