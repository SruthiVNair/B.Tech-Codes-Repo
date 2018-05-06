#include<stdio.h>
#include<sys/types.h>
void childprocess(void);
void parentprocess(void);
int pid1,n=0,i=0;
int a[20],e[20],o[20];
main()
{
printf("enter the limit");
scanf("%d",&n);
printf("enter the numbers:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
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
printf("\neven numbers are:");
	for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
	e[i]=a[i];
	printf("%d\t",e[i]);
	}

}}
void parentprocess(void)
{
	pid1=getpid();
printf("\nodd numbers are:");
	for(i=0;i<n;i++)
	if(a[i]%2!=0)
	{
	o[i]=a[i];
	printf("%d\t",o[i]);
	}
}	

