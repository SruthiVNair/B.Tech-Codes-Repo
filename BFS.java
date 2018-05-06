import java.io.*;
import java.util.*;
class Queue
{
private int size=20;
private int[] Qarray;
private int front,rear;
public Queue()
{
Qarray=new int[size];
front=0;rear=-1;}
public void insertion(int j)
{
if(rear==size-1)
rear=-1;
Qarray[++rear]=j;
}
public int remove()
{
int temp=Qarray[front++];{
if(front==size)

front=0;
return temp;
} 
public boolean isEmpty()
{
return(rear+1==front||(front+size-1==rear))

