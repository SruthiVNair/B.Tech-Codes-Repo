#include<stdio.h>
int main()
{
int a[20],dec,i=0;
printf("enter the number to find binary");
scanf("%d",&dec);
while(dec>0)
{
a[i]=dec%2;
i++;
dec=dec/2;
}
printf("binary no \t",dec);
for(int j=(i+1);j>0;j--)
{
printf("%d",a[j]);
}
}
