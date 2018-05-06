import java.io.*;
import java.util.*;
class pri
{
int i,a,n,b,rear;
Scanner m=new Scanner(System.in);

int q[]=new int[90];
public pri()
{
rear=0;
}
public void insert()
{
System.out.println("Enter the element");
a=m.nextInt();
if(rear==0)
{
q[rear++]=a;
}
else 
{
for(i=rear-1;i>=0;i--)
{
if(a>q[i])
{
q[i+1]=q[i];
}
else
break;
}
q[i+1]=a;
rear++;
}}
public int delete()
{

return(q[--rear]);

} 
void display()
{
if(rear==0)
System.out.println("Queue is empty");
else
{
System.out.println("The priority queue is");
for(i=0;i<rear;i++)
System.out.println("\t"+q[i]);
}}

}
class priorityq
{
public static void main(String args[])
{
int n;
Scanner si=new Scanner(System.in);
System.out.print("Enter the size ");
n=si.nextInt();
pri z =new pri();
System.out.println("\n\n1.Insert\n2.delete\n3.display\n\n");
int c;
do
{
System.out.println("\n\nEnter the choice");
c=si.nextInt();

switch(c)
{
case 1:z.insert();
break;
case 2:z.delete();
break;
case 3:z.display();
break;
default:System.out.println("invalid choice");
}}
while(c<=3);
}
}



