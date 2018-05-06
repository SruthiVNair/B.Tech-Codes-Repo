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
}
main()
{
	struct msgbuf buf;
		int msqid,key;
		msqid=msgget(key,0666|IPC_CREAT);
		if(msqid==-1)
			printf("Error");
		buf.mtype=1;
		while(1)
		
{
printf("\n sending...\n");
printf("Messsage from A to B");
gets(buf.mtext);
if(msgsnd(msqid,&buf,100,0)==-1)
	printf("Error");
else
	printf("\n message send");
printf("\n Receiving...\n");
printf("Message from B to A");
if(msgrcv(msqid,&buf,100,0)==-1)
	printf("Error");
else{
	puts(buf.mtext);
	printf("message received");}

}

if(msgctl(msqid,IPC_RMID,NULL)==-1)
	{
	printf("CTL error");
}
}

