import java.io.*;
import java.util.*;
class Demograph
{
Scanner s=new Scanner(System.in);
int i,j,n;
int a[]=new int[25];
void input()
{
System.out.println("enter the total no. of nodes");
n=s.nextInt();

System.out.println("enter the elements to be inserted in inorder manner");
for(int i=0;i<n;i++)
{
a[i]=s.nextInt();
}for(i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
int top=-1;
 public void push(int v)
{
int s[]=new int[100];
int n;

public void push(int v)
{
if(top<n-1)
{
top++;
s[top]=v;
}
else
System.out.println("full");
}
public int pop()
{
int v;
if(top>=0)
{
v=s[top];
top--;
return v;
}
else
{
System.out.println("empty stack");
return (-1);
}
}
Demograph current`   


create adjacency mat
create vertex visited list matrix






