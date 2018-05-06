import java.io.*;
class priority
{
int i,a,n,b,rear;
Scanner s=new Scanner(System.in);
int q[]=new int[25];
public priority()
{
rear=0;
}
public void insert()
{System.out.println("enter the element");
a=s.nextInt();
for(i=0;i<n;i++)
{
q[i]=s.nextInt();
if(rear==0){
q[rear++]=a}
else
{
for(i=rear-1;i>=0;i--)
{
if(a>q[i]);
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
void dispaly()
{
if(rear==0)
System.out.println("queue is empty");
else
{
System.out println(the priority queue is);
for(i=0;i<rear;i++)
{
System.out.println(q[i]);
}}
class 
