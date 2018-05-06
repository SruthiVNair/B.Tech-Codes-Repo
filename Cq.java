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
 if((front==0) && (rear==0) && (rear>n))
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
	rear++;
	que[rear]=a;
	if(rear==n-1)
	{
	rear=0;
	que[rear]=a;
	}
}
}
void delete()
{
if(front>rear||front==-1)
System.out.println("Queue is empty");

else 
{
b=que[front];
front++;
System.out.println("succesfully delete"+b);
}


}
void dis()
{
//if((front==-1)&&(rear==-1)&&rear>n)
if((front==0)&&(rear==0)&&(rear>n))
System.out.println("Queue is empty");
else{
System.out.println("the Queue is ;");

for(i=front;i<=rear;i++)
System.out.println(que[i]);
}
}
}

class Cq
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
enter the choice
1
enter the element
3
enter the choice
1
enter the element
4
Queue is full
enter the choice
3
the Queue is :
1
2
3
enter the choice
2
succesfully delete1
enter the choice
3
the Queue is :
2
3
enter the choice
1
enter the element
22
element is succesfully inserted at front end
enter the choice
3
the Queue is :
22
2
3
enter the choice

