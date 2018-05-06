import java.util.*;
import java.io.*;
class Sub
{int n;
Scanner s=new Scanner(System.in);
int a[]=new int[50];
int i=0;
int flag=0,key,pos;
void input()
{
System.out.println("enter limit");
 n=s.nextInt();
System.out.println("enter elements");
for(i=0;i<n;i++)
{
a[i]=s.nextInt();
}
System.out.println("element to be searched?");
key=s.nextInt();
}
void search()
{
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=1;
break;
}}
if(flag==1)
{
System.out.println("element to be searched is found at position"+(i+1));
}
else{
System.out.println("element not found!!!! Search failed");
}}}
class LinearSearch
{
public static void main(String args[])
{
Sub a=new Sub();
a.input();
a.search();
}}






