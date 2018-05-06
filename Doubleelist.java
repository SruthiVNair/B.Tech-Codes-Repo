import java.util.*;
class Link
{
  public int data;
  public Link next;
  public Link previous;
  public Link(int d)
   {
     data=d;
   }
}
class Linklist
{
  Link previous,frst,last;
  int size;
  public Linklist()
   {
    previous=null;
    frst=null;
    last=null;
     size=0;
  }
void insertfrst(int key)
{ Link newLink=new Link(key);
  if(frst==null)
   last=newLink;
  else
   {  frst.previous=newLink;}
  newLink.next=frst;
  frst=newLink;
}
void insertlast(int key)
{
  Link newLink=new Link(key);
  if(frst==null)
   frst=newLink;
  else
    {
      last.next=newLink;
      newLink.previous=last;
    }
  last=newLink;
}
public boolean insertaftr(int val,int key)
{
  Link current=frst;
 while(current.data!=val)
 {
   current=current.next;
   if(current==null)
     return false;
  }
Link newLink=new Link(key);
if(current==last)
 {
   newLink.next=null;
    last=newLink;
  }
 else
  {
    newLink.next=current.next;
    current.next.previous=newLink;
    newLink.previous=current;
    current.next=newLink;
   }
  return true;
  
}
void deletefrst()
{
  Link temp=frst;
  if(frst.next==null)
    last=null;
  else
   frst.next.previous=null;
    frst=frst.next;
     //return temp;
}
void deletelast()
{
  Link temp=last;
   if(frst.next==null)
       frst=null;
  else
    last.previous.next=null;
    last=last.previous;
    // return temp;
}
void deleteaftr(int val)
{
 Link current=frst;
 while(current.data!=val)
  {
    current=current.next;
   /* if(current==null);
      return null;*/
   }
if(current==frst)
  frst=current.next;
else
  current.previous.next=current.next;
if(current==last)
  last=current.previous;
else
  current.next.previous=current.previous;
    //return current;
}
void display()
{ if((frst==null)&&(last==null))
   System.out.println("list is empty");
 else
  {
  System.out.println("the elements are");   
    Link current=frst;
   while(current!=null)
   {
     System.out.println(current.data );
     current=current.next;
    }
   System.out.println(" ");
}}
}
class Doubley
{
 public static void main(String args[])
   
 {
  Scanner S=new Scanner(System.in);
  Linklist list=new Linklist(); 
  int item,ch=1,k;
  
  while(ch==1)
  {
    System.out.println("\n\nMENU:\n1.Insert at first\n2.Insert at last   \n3.Insert at any position");
    System.out.println("4.Delete at First\n5.Delete last\n6.Delete at any position\n7.Display\n");
    System.out.println("\nENTER YOUR CHOICE:");
    int choice=S.nextInt();
    switch(choice)
    {
    case 1: System.out.println("HOW MANY ELEMENTS?");
           int n=S.nextInt();
           System.out.println("enter elements: ");
           while(n>0)
          {
           item=S.nextInt();
           list.insertfrst(item);
            n--;
          } break;
    case 2:
           System.out.println("ENTER ELEMENTS: ");
          
           item=S.nextInt();
           list.insertlast(item);
          
           break;
    case 3:System.out.println("ENTER ELEMENTS: ");
           item=S.nextInt();
           System.out.println("ENTER THE KEY:");
            k=S.nextInt();
           list.insertaftr(k,item); break;
    case 4: list.deletefrst(); break;
    case 5: list.deletelast(); break;
    case 6:System.out.println("enter item to be deleted");
             item=S.nextInt(); 
		 list.deleteaftr(item); break;
    case 7: list.display(); break; }
  System.out.println("\nDO YOU WANT TO CONTINUE(yes=1/no=0)");
   ch=S.nextInt();
  }
 }
} 
