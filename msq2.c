#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define key 999
struct msgbuf
{
	long mtype;
	char mtext[100];
};
main()
{
	struct msgbuf buf;
		int msqid;
		msqid=msgget(key,0666|IPC_CREAT);
		if(msqid==-1)
			printf("Error");
		buf.mtype=2;
		while(1)
		
{
printf("\n receiving...\n");
printf("Messsage from A to B");

if(msgrcv(msqid,&buf,100,0)==-1)
	printf("Error");
else
{
puts(buf.mtext);
	printf("message received");
}
printf("\n Sending...\n");
printf("Message from B to A");
gets(buf.mtext);
if(msgsnd(msqid,&buf,100,0)==-1)
	printf("Error");
else
	printf("\n message send");}
if(msgctl(msqid,IPC_RMID,0)==-1)
	{
	printf("CTL error");
}
}
