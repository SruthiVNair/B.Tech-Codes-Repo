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
printf("enter the num of students");
scanf("%d",&cnt);
printf("enter the details");
for(i=0;i<cnt;i++)
{
printf("\n%d",i+1);
printf("\nenter the roll no.:");
scanf("%d",&st[i].roll);
printf("\nenter the name");
scanf("%s",st[i].name);
printf("\nenter mark1");
scanf("%d",&st[i].mark1);
printf("\nenter mark2");
scanf("%d",&st[i].mark2);
write(fd1,&st[i],sizeof(st));
}
close(fd1);
fd2=open("student.txt",O_CREAT|O_RDWR|O_APPEND,S_IRUSR|S_IWUSR);
printf("\nRoll no\tName\tScience\tMaths\n");
for(i=0;i<cnt;i++)
	{
	read(fd2,&st[i],sizeof(st));
	printf("\n%d\t%s\t%d\t%d\n",st[i].roll,st[i].name,st[i].mark1,st[i].mark2);
	}
close(fd2);
}
