import java.util.*;
class Array
{
  int arr[], top, size,len;
  Scanner S=new Scanner(System.in);
  public Array(int n)
  {
   size=n;
   arr=new int[size];
   len=0;
   top=-1;
  }
  void push(int y)
  {
   while(y>0)
   {
    System.out.println("ENTER ELEMENT TO PUSH:");
    int x=S.nextInt();
   if(top<size)
   {
    top++;
    arr[top]=x;
    len++;
   }
   else
    System.out.println("STACK IS FULL!!!");
   y--; }
  }
  void pop()
  {
   if(top==-1)
     System.out.println("STACK IS EMPTY!!!");
   else
   {
    int item=arr[top];
    top--;
    len--;
     System.out.println("ELEMENT POPPED: "+item);
   } 
  }
  void display()
  {
    System.out.println("STACK ELEMENTS:");
    if(len==0)
      System.out.println("NOTHING TO DISPLAY!!!");
    else
    {
     for(int i=top;i>=0;i--)
       System.out.print(arr[i]+"  ");
      System.out.println();
    }
   }
}

class Stackk

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
    System.out.println("MENU:\nSTACK OPERATIONS:\n1.Push\n2.Pop\n3.Display");
    System.out.println("\nENTER YOUR CHOICE:");
    int choice=S.nextInt();
    switch(choice)
    {
     case 1: System.out.println("HOW MANY ELEMENTS YOU WANT TO PUSH:");
    		int n= S.nextInt();   
		if(n<=limit)   
		A.push(n);
		else
		System.out.println("check array limit");
		 break;
     case 2: A.pop(); break;
     case 3: A.display(); break;
     default: System.out.println("WRONG ENTRY"); break; 
   }
   System.out.println("\nDO YOU WANT TO CONTINUE(yes=1/no=0)");
   ch=S.nextInt();
  }
 }
}
