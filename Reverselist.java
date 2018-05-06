 import java.io.*;
import java.util.Scanner;
class node
{
int data;
node link;
public node()
{
data=0;
link=null;
}
public node(int d)
    {
        data = d;
        link = null;
    }
}
class LinkedList
{
node start;
node end;
public void LinkedList()
{
start=null;
end=null;
}
public void revfun(int val)
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
{ q=start;}
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
System.out.println("the elements are: ");
if(start==null)
{
System.out.println("nothing to display");
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
class Reverselist
{
public static void main(String args[])
{
LinkedList obj=new LinkedList();
Scanner s=new Scanner(System.in);
System.out.println("enter the limit of numbers to be reversed");
int n=s.nextInt();
System.out.println("enter numbers to be reversed");

for(int i=0;i<n;i++)
{
int item=s.nextInt();
obj.revfun(item);
obj.reverse();
}
obj.display();
}
}


