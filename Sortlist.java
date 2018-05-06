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
 public void createlist(int val)
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
public void sortlist()
{
node q=new node();
node p=new node();
int tmp;
q=start;
while(q!=null)
{
p=q.link;

while(p!=null)
{
if(q.data>p.data)
{
tmp=q.data;
q.data=p.data;
p.data=tmp;
}
p=p.link;
}
q=q.link;}
}


public void display()
{
  
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

class Sorts
{
public static void main(String args[])
    {             
	int item;
        Scanner s= new Scanner(System.in);
        
        linkedList list = new linkedList(); 
        System.out.println("Enter the no of elements");
	  int n = s.nextInt();   
 System.out.println("Enter the  elements in the list");

for(int i=0;i<n;i++)
{
item=s.nextInt();
list.createlist(item);
}
System.out.println("\n The elements are : ");
list.display();
 System.out.println("Sorted list is");
list.sortlist();
list.display();
}
}


