import java.io.*;
import java.util.*;
class Stack
{
private int top,m;
private int []a;
public Stack(int max)
{
m=max;
a=new int[m];
top=-1;
}
public void push(int key)
{
a[++top]=key;
}
public int pop()
{
return a[top--];
}}
class Post
{
public int calc(String s)
{
int n,r=0;
n=s.length();
Stack b=new Stack(n);
for(int i=0;i<n;i++)
{
char ch=s.charAt(i);
if(ch>='0'&& ch<='9')
b.push((int)(ch-'0'));
else{
int x=b.pop();
int y=b.pop();
switch(ch){
case'+':r=x+y;
break;
case'-':r=y-x;
break;
case'*':r=x*y;
break;
case'/':r=y/x;
break;
}
b.push(r);
}
}
r=b.pop();
return(r);
}}
class Postfix
{
public static void main(String args[])
{
String in;
while(true){
System.out.println("enter postfix expression ");
in=getString();
if(in.equals(""))
break;
Post x= new Post();
System.out.println(x.calc(in));
}}
public static String getString()
{
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
return s;
}}
