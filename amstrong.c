#include<stdio.h>
#include<sys/types.h>
void childprocess(void);
void parentprocess(void);
int d=0,n=0,s=0,a=0,flag=0,fd[2];
main()
{
pid_t pid;
pipe(fd);
pid=fork();
if(pid==-1)
{
	printf("process creation error");
	
}
else if(pid==0)
parentprocess();
}
else
	childprocess();
void parentprocess(void)
{
	printf("the  no. is");
	scanf("%d",&n);
	a=n;
	while (n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	
		if(s==a)
		{
			flag=1;
			break;
		}}
	close(fd[0]);
	write(fd[1],&flag,sizeof(flag));
}
void childprocess(void)
{
	close(fd[1]);
	read(fd[0],&flag,sizeof(flag));
	printf("\nCHILD PROCESS \n");
		if(flag==1)
		{
			printf("\n amstrong");

		}	
		else
		{
			printf("\n not amstrong");
		}
}

