#include<stdio.h>
#include<sys/types.h>
void childprocess(void);
void parentprocess(void);
int num,i=0,flag=0,fd[2];
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
	childprocess();
else
	parentprocess();
}

void parentprocess(void)
{
	printf("\n^^^^PARENT PROCESS^^^^\n");
	printf("\nEnter the number:\n");
	scanf("%d",&num);
	if(num==1)
	printf("neither prime nor composite");
	for(i=2;i<(num/2);i++)
	{
		if((num%i)==0)
		{
			flag=1;
			break;
			}
	}
	
close(fd[0]);
write(fd[1],&flag,sizeof(flag));
}
void childprocess(void)
	{
	close(fd[1]);
	read(fd[0],&flag,sizeof(flag));
	printf("\n(^_^)CHILD PROCESS(^_^)\n");
		if(flag==0)
		{
			printf("\nP*R*I*M*E N*U*M*B*E*R:)");

		}	
		else
		{
			printf("NOT PRIME :(");
		}
	}

