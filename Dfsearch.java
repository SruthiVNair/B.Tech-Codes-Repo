import java.io.*;
import java.util.*;
class Stack
{
private int size=20;
private int st[];
private int top;
public Stack()
{
st=new int[size];
top=-1;
}
public void push(int j)
{st[++top]=j;}
public int pop()
{return st[top--];}
public int peek()
{
return st[top];
}
public boolean isEmpty()
{return (top==-1);}
