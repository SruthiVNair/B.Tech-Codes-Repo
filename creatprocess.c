#include<stdio.h>
#include<sys/types.h>
void childprocess(void);
void parentprocess(void);
int pid1,i=0;
main()
{
pid_t pid;
pid=fork();
if(pid==-1)
{
	printf("process creation error");
	
}
else if(pid==0)
	childprocess();
else
	parentprocess();
}
void childprocess(void)
{
	pid1=getpid();
	for(i=1;i<=3;i++)
	printf("line from child value=%d\n",i);
	printf("ID of child=%d\n",pid1);
	printf("#$$childprocess haS been done\n");
}
void parentprocess(void)
{
	pid1=getpid();
	for(i=1;i<=2;i++)
	printf("line from parent value=%d\n",i);
	printf("ID of parent=%d\n",pid1);
	printf("#$$parentprocess haS been done\n");
}	

