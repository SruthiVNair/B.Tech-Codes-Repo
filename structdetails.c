#include<stdio.h>
#include<string.h>
main()
{
int i,j,n;
struct student
{
int regno;
char name[20];
int m1,m2,m3,mark;
}
s[15],temp;
printf("enter the no. of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i].regno);
scanf("%s",s[i].name);
scanf("%d",&s[i].m1);
scanf("%d",&s[i].m2);
scanf("%d",&s[i].m3);.
s[i].mark=s[i].m1+s[i].m2+s[i].m3;
}
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
{
if(s[j].mark<s[j+1].mark)
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}}}
for(i=0;i<n;i++)
{
printf("\n%d",s[i].regno);
printf("\n%s",s[i].name);
printf("\n%d",s[i].mark);
}}
