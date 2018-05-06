import java.util.*;

class Link
{
 public int data;
 public Link next;
 public Link(int d)
 {
   data=d;
 }
}

class LinkList
{
 Link first,last;
 int size;
 public LinkList()
 {
   first=null;
   last=null;
   size=0;
 }
 void insertFirst(int value)
 {
  Link newLink=new Link(value);
  newLink.next=first;
  first=newLink; size++;
 }
 
 void insertLast(int value)
 {
  Link temp;
  temp=first;
  Link newLink=new Link(value);
  if(first==null)
  {
   first=newLink;
   last=newLink;
  }
  while(temp.next!=null)
  {
   temp=temp.next;
  } 
  temp.next=newLink;
  last=newLink;
  newLink.next=null; size++;
 }
 void insertPos(int value)
 {
  Scanner S=new Scanner(System.in);
  Link newLink=new Link(value);
  System.out.println("ENTER THE POSITION:");
  int pos=S.nextInt();
  Link temp1=first;
  Link temp2=first;
  if(pos==1)
  {
   newLink.next=first;
   first=newLink;
  }
  else
  {
   int i=1;
   while(temp1!=last && i!=pos)
   {
     temp2=temp1;
     temp1=temp1.next;
     i++;
   }
   if(i==pos)
   {
    newLink.next=temp1;
    temp2.next=newLink;
   }
  } size++;
 }
 void deleteFirst()
 {
   Link temp=first;
   first=first.next;
   System.out.println("DELETED ELEMENT= "+temp.data); size--;
 }
 void deleteLast()
 {
  Link temp1=first;
  Link temp2=first;  
  int i=1;
   while(temp1!=last && i!=size)
   {
     temp2=temp1;
     temp1=temp1.next;
     i++;
   }
   if(i==size)
   {
    temp2.next=temp1.next;
   }
    System.out.println("DELETED ELEMENT= "+temp1.data); size--;
 }
 void deletePos()
 {
  Scanner S=new Scanner(System.in);
  System.out.println("ENTER THE POSITION:");
  int pos=S.nextInt();
  Link temp1=first;
  Link temp2=first;  
  int i=1;
   while(temp1!=last && i!=pos)
   {
     temp2=temp1;
     temp1=temp1.next;
     i++;
   }
   if(i==pos)
   {
    temp2.next=temp1.next;
   }
    System.out.println("DELETED ELEMENT= "+temp1.data); size--;
 }
 void display()
 {
   System.out.println("ELEMENTS ARE: ");
   if(first==null)
    System.out.println("List is empty");
   Link current=first;
   while(current.next!=null)
   {
    System.out.print(current.data+"\t");
    current=current.next;
   }
   System.out.print(current.data);
   System.out.println("");
 }
}

class singlylist
{
 public static void main(String arg[])
 {
  Scanner S=new Scanner(System.in);
  LinkList list=new LinkList(); 
  int item,ch=1;
  while(ch==1)
  {
    System.out.println("\n\nMENU:\nSINGLEY LINKED LIST OPERATIONS:\n1.Insert at first\n2.Insert at last\n3.Insert at any position");
    System.out.println("4.Delete at First\n5.Delete last\n6.Delete at any position\n7.Display\n");
    System.out.println("\nENTER YOUR CHOICE:");
    int choice=S.nextInt();
    switch(choice)
    {
    case 1: System.out.println("HOW MANY ELEMENTS?");
           int n=S.nextInt();
           System.out.println("ENTER ELEMENTS: ");
           while(n>0)
          {
           item=S.nextInt();
           list.insertFirst(item);
            n--;
          } break;
    case 2:/*System.out.println("HOW MANY ELEMENTS?");
           int m=S.nextInt();*/
           System.out.println("ENTER ELEMENTS: ");
           //while(m>0)
          //{
           item=S.nextInt();
           list.insertLast(item);
           // m--;
          //} 
           break;
    case 3:System.out.println("ENTER ELEMENTS: ");
           item=S.nextInt();
           list.insertPos(item); break;
    case 4: list.deleteFirst(); break;
    case 5: list.deleteLast(); break;
    case 6: list.deletePos(); break;
    case 7: list.display(); break; }
  System.out.println("\nDO YOU WANT TO CONTINUE(yes=1/no=0)");
   ch=S.nextInt();
  }
 }
} 
