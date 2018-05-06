#include<stdio.h>
main()
{
char str[20];
int i,count=0;
printf("enter the sentence");
gets(str);
for (i=0;str[i]!='\0';i++)
{
if (str[i]==' ')
count++;
}
printf("%d",count);
}
