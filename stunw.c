#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
struct student
{
int roll;
char name[20];
int mark1,mark2;
}
st[50];
main()
{
int cnt,i;
int fd1,fd2;
char buf;
fd1=open("student.txt",O_CREAT|O_RDWR|O_APPEND,S_IRUSR|S_IWUSR);
printf("Enter the number of students:");
scanf("%d",&cnt);
printf("Enter the details:");
for(i=0;i<cnt;i++)
{
printf("\n%d",i+1);
printf("\nEnter the roll no:");
scanf("%d",&st[i].roll);
printf("enter the name:");
scanf("%s",st[i].name);
printf("enter the mark for science:");
scanf("%d",&st[i].mark1);
printf("enter the mark for maths:");
scanf("%d",&st[i].mark2);
write(fd1,&st[i],sizeof(st));
}
close(fd1);
fd2=open("stud.txt",O_CREAT|O_RDWR|O_APPEND,S_IRUSR|S_IWUSR);
printf("\nRoll no\tName\tScience\tMaths\n");
for(i=0;i<cnt;i++)
{
read(fd2,&st[i],sizeof(st));
printf("\n%d\t%s\t%d\t%d\n",st[i].roll,st[i].name,st[i].mark1,st[i].mark2);
}
close(fd2);
}
