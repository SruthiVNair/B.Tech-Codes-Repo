#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<dirent.h>
main()
{
struct dirent *p;
char dir1[40];
printf("enter the directory name...");
scanf("%s",dir1);
DIR *f=opendir(dir1);
while((p=readdir(f))!=NULL)
{
printf("%s",p->d_name);
}
closedir(f);
}
