import java.io.*;
class Sub
public void insert(long key)
{
link newlink=new link;
class Link
{
 public int data;
 public Link next;
 public Link(int d)
 {
   data=d;
 }
}

class LinkList
{
 Link first,last;
 int size;
 public LinkList()
 {
   first=null;
   last=null;
   size=0;
 }
 void insertFirst(int value)
 {
  Link newLink=new Link(value);
  newLink.next=first;
  first=newLink; size++;
 }
 
 void insertLast(int value)
 {
  Link temp;
  temp=first;
  Link newLink=new Link(value);
  if(first==null)
  {
   first=newLink;
   last=newLink;
  }
  while(temp.next!=null)
  {
   temp=temp.next;
  } 
  temp.next=newLink;
  last=newLink;
  newLink.next=null; size++;
 }
