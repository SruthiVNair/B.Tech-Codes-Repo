import java.util.*;
class check
{
int i,a,n,j,b,c,front,rear;
Scanner si=new Scanner(System.in);
int que[]=new int[20];
public check(int max)
{
front=-1;
rear=-1;
n=max;
}
void insert()
{
System.out.println("enter the element");
 a=si.nextInt();
 if(front==(rear+1)%n)
	{
	System.out.println("Queue is full");
	}
else if (front>0)
 {
 front=front-1;
 que[front]=a;
System.out.println("element is succesfully inserted at front end");
 }
else
{
	if(front==-1)
	{
	front=0;
	}
	
	
	if(rear==n-1)
	{
	rear=0;
	
	}
else
{
	rear++;
}
que[rear]=a;
}

}
void delete()
{
if(front>rear||front==-1)
System.out.println("Queue is empty");

else 
{
a=que[front];
front++;
System.out.println("succesfully delete"+a);
}

}
void dis()
{

if((front==0)&&(rear==0)&&(rear>=n))
System.out.println("Queue is empty");
else{
System.out.println("the Queue is :");

for(i=front;i<=rear;i++)
System.out.println(que[i]);
}
}
}

class Cqu
{
public static void main(String args[])
{
int n;
Scanner in=new Scanner(System.in);
System.out.println("enter the size of Queue");
n=in.nextInt();
check s=new check(n);
System.out.println(" 1 insert\n 2 delete\n 3 display\n");
int c;
do
{
System.out.println("enter the choice");
c=in.nextInt();
switch(c)
{
case 1:s.insert();
       break;
case 2:	
	s.delete();
	break;
case 3:
	s.dis();
	break;
default:System.out.println("invalid");
} 
}
while(c<=3);

}
}

