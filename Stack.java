import java.io.*;
import java.util.*;
class Stack-2
{
int s[]=new int[100];
int top,n;
public Stack(int p)
{n=p;
top=-1;
}
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
}}
public void display()
{
 if(top>=0)
{
for(int i=top;i>=0;i--){
System.out.println(s[i]);
}
else
System.out.println("empty stack");
}
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
System.out.println("size?");
int size=s.nextInt();
Stack call=new Stack(size);
int choice;
boolean exit=false;
while(!exit)
{
System.out.println("1.push\n2.pop\n3.display\n4.exit\n\nENTER YOUR CHOICE...");
choice=s.nextInt();
switch(choice)
{
case1:
System.out.println("no. to be pushed?");
int num=s.nextInt();
call.push(num);
break;
case2:
int popped=call.pop();
if(popped!=-1)
System.out.println("pushed"+popped);
break;
case3:
call.display();
break;
case4:
exit=true;
break;
default:
System.out.println("wrong choice:-)");
break;
}
}
}
}
