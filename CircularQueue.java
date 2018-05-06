import java.util.*;
import java.io.*;
class Crq
{
int queue[]=new int[20];
int front,rear;
Scanner s=new Scanner(System.in);

void insert(int n)
{
//System.out.println("enter the limit");

System.out.println("enter the elements");
for(int i=0;i<n;i++)
{
queue[i]=s.nextInt();
}
//int queue=new int[50];
/*if (front==(rear+1)%n);
{
System.out.println("Queue is overflown");

}*/
if(front==-1)
{
front=0;
rear=0;
}
else if(rear==n-1)
{rear=0;}

else{
rear=rear+1;
System.out.println("enter the item");
int item=s.nextInt();
queue[rear]=item;
	}
}
public void delete()
{
if(front==-1)
{System.out.println("queue underflow");}
/*else 
item=queue[front];System.out.println("deletion is done at position"+front);*/
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==n-1)
{front=0;}
else
front++;
}
void display()
{
for(int i=0;i<n;i++)
{
System.out.println(queue[i]);
}
}
}
class CircularQueue
{
public static void main(String args[])
{int n;System.out.println("enter the limit");
n=S.nextInt();
Crq obj=new Crq();
int c=1;
do{
System.out.println(" 1.Insert \n 2.Delete \n 3.Display \n 4.exit");
int n=nextInt()
Scanner S=new Scanner(System.in);
c=S.nextInt();
switch(c)
{
case 1:obj.insert();
break;
case 2:obj.delete();
break;
case 3:obj.display();break;
default:System.out.println("invalid");
}
}while(c<=3);
}}
