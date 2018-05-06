#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
main()
{
int i,size,n;
char c;
int fd2=open("reverse.txt",O_CREAT|O_RDWR|O_APPEND,S_IRUSR|S_IWUSR);
size=lseek(fd2,0,SEEK_END);
printf("size=%d",size);
for(i=size-1;i>=0;i--)
{
lseek(fd2,i,SEEK_SET);
n=read(fd2,&c,1);
printf("%c",c);
}
close(fd2);
}

