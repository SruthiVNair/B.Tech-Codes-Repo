import java.util.*;
class Array
{
  int queue[], front, rear, size,len;
  Scanner S=new Scanner(System.in);
  public Array(int n)
  {
   size=n;
   queue=new int[size];
   len=0;
   rear=-1;
   front=-1;
  }
	void insertfront()
	{
   if(rear>=size&&front==0)
    System.out.println("QUEUE IS FULL!!!");
   else
		{
			if(front>0)
		   {System.out.println("ENTER ELEMENT TO BE INSERTED:");
    		int item=S.nextInt();
				front--;
				queue[front]=item;
			
			
			len++;
		  }
	
		}
	}

  void insertrear(int y)
  {
   while(y>0)
   {
    System.out.println("ENTER ELEMENT TO BE INSERTED:");
    int item=S.nextInt();
   if(rear>=size)
    System.out.println("QUEUE IS FULL!!!");
   else
   {
    if(rear==-1 && front==-1)
     front=0;
    rear++;
    queue[rear]=item; len++;
   }  
   y--; 
  }
 }

 void deletefront()
 {
  if(front==-1 || front>rear)
     System.out.println("QUEUE IS EMPTY!!!");
  else
  {
   int item=queue[front];
   front++;
   len--;
   System.out.println("ELEMENT DELETED: "+item);
  } 
 }
void deleterear()
	{
  if(front==-1 || front>rear)
     System.out.println("QUEUE IS EMPTY!!!");
  else
  {
   int item=queue[rear];
   rear--;
   len--;
   System.out.println("ELEMENT DELETED: "+item);
  } 
 }
 void display()
 {
  System.out.println("QUEUE ELEMENTS:");
  if(len==0)
    System.out.println("NOTHING TO DISPLAY!!!");
  else
  {
   for(int i=front;i<=rear;i++)
       System.out.print(queue[i]+"  ");
      System.out.println();
  }
 }
}

class Dequ
{
 public static void main(String arg[])
 {
  Scanner S=new Scanner(System.in);
  System.out.println("ENTER THE LIMIT:"); 
  int limit=S.nextInt();
  Array A=new Array(limit);
  int ch=1;
  while(ch==1)
  {
    System.out.println("\n\nMENU:\nQUEUE OPERATIONS:\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Display");
    System.out.println("\nENTER YOUR CHOICE:");
    int choice=S.nextInt();
    switch(choice)
    {
     case 1: //System.out.println("HOW MANY ELEMENTS YOU WANT TO INSERT:");
    		//int n= S.nextInt();   
		//if(n<=limit)   
		 A.insertfront();
		
			break;
		case 2: System.out.println("HOW MANY ELEMENTS YOU WANT TO INSERT:");
    		int n= S.nextInt();   
		if(n<=limit)   
		 A.insertrear(n);
		else
		 System.out.println("Check array limit");
		break;
     case 3: A.deletefront(); break;
     case 4: A.deleterear(); break;
		case 5:A.display();break;
     default: System.out.println("WRONG ENTRY"); break; 
   }
   System.out.println("\nDO YOU WANT TO CONTINUE(yes=1/no=0)");
   ch=S.nextInt();
  }
 }
}
