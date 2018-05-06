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
  void insert(int y)
  {System.out.println("ENTER ELEMENT TO BE INSERTED:");
   while(y>0)
   {
    
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
 void delete()
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

class Queueee
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
    System.out.println("\n\nMENU:\nQUEUE OPERATIONS:\n1.Insert\n2.Delete\n3.Display");
    System.out.println("\nENTER YOUR CHOICE:");
    int choice=S.nextInt();
    switch(choice)
    {
     case 1: System.out.println("HOW MANY ELEMENTS YOU WANT TO INSERT:");
    		int n= S.nextInt();   
		if(n<=limit)   
		 A.insert(n);
		else
		 System.out.println("Check array limit");
		break;
     case 2: A.delete(); break;
     case 3: A.display(); break;
     default: System.out.println("WRONG ENTRY"); break; 
   }
   System.out.println("\nDO YOU WANT TO CONTINUE(yes=1/no=0)");
   ch=S.nextInt();
  }
 }
}
