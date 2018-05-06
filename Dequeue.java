import java.util.*;
import io.*;
class Dequeue
{
int Q[]=new int[100];
int front,rear; 
Scanner s=new Scanner(System.in);
System.out.println("ENTER limit");
int n=s.nextInt();
size=n;
front=0;rear=-1;
public void insert()
{
if(rear>=n&&front=0)
{
System.out.println("overflow");
return;
}
if(front>0)
{
front--;
else return;
}
System.out.println("ENTER the value");
int value=s.nextInt();
q[front]=value;
