import java.io.*;
import java.util.*;
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
data=d;
node=null;
}
}
class linkedlist
{
node start;
node end;
public linkedlist()
{
start=null;
end=null;
}
public void newlist(int val)
{
node q=new node();
node temp=new node(int val);

