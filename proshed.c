#include<stdio.h>
#include<sys/types.h>
main()
{
int p0,p1,p2,p3,i,n,a[20],c[20],t[20],w[20],s=0;
printf("enter the number of processes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the execution time of p%d ",i);
scanf("%d",&a[i]);
}

printf("process\t\tburst\t\tcomplete\tturnaround\twaiting\n");
for(i=0;i<n;i++)
{
s=s+a[i];
c[i]=s;
t[i]=c[i];
w[i]=t[i]-a[i];
printf("\np%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,a[i],c[i],t[i],w[i]);
}

}




