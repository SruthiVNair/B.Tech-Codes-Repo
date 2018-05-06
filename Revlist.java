 import java.io.*;
import java.util.Scanner;
class node
{
     int data;
     node link;
 
    
    public node()
    {
        link = null;
        data = 0;
    }    
  public node(int d)
    {
        data = d;
        link = null;
    }
}
class linkedList
{
     node start;
     node end ;
    
    public linkedList()
    {
        start = null;
        end = null;
      
    }
 public void listreverse(int val)
{
node q=new node();
node temp=new node(val);
temp.data=val;
temp.link=null;
if(start==null)
{
start=temp;
}
else
{
q=start;
}
while(q.link!=null)
{
q=q.link;
}
q.link=temp;
}
public void reverse()
{
node ptr1=new node();
node ptr2=new node();
node ptr3=new node();
if(start.link==null)
return;
ptr1=start;
ptr2=ptr1.link;
ptr3=ptr2.link;
ptr1.link=null;
ptr2.link=ptr1;
while(ptr3!=null)
{
ptr1=ptr2;
ptr2=ptr3;
ptr3=ptr3.link;
ptr2.link=ptr1;
}
start=ptr2;
}

public void display()
{
  System.out.println("\nnow the elements are : ");
	if(start==null)
{
  System.out.println("\nList is empty : ");
return;
}
node current=start;
while(current.link!=null)
{
  System.out.println(current.data);
current=current.link;
}
  System.out.println(current.data);
}
}

class Revlist
{
  public static void main(String args[])
    {             
	int item;
        Scanner s= new Scanner(System.in);
        
        linkedList list = new linkedList(); 
        System.out.println("enter the no of elements");
	  int n = s.nextInt();   
 System.out.println("enter the  elements in the list");
for(int i=0;i<n;i++)
{
item=s.nextInt();
list.listreverse(item);
}
list.display();
 System.out.println("after reversing");
list.reverse();
list.display();
}
}
