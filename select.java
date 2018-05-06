import java.util.*;
import java.io.*;
class Sub
{
int i,n,min,pass;
int out,in,temp;
int a[]=new int[10];
void ins()
{
Scanner s=new Scanner(System.in);
System.out.println("limit?");
n=s.nextInt();
System.out.println("enter elements");
for(i=0;i<n;i++)
{
a[i]=s.nextInt();
}
}
void sort()
{
//pass=1;
for(out=0;out<n-1;out++)
{

min=out;
for(in=out+1;out<n;in++)
{
if(a[in]<a[min])
{
min=in;

temp=a[out];
a[out]=a[min];
a[min]=temp;}
}}}
System.out.println("pass ");
for(i=0;i<n;i++){
System.out.println(a[i]);}
}
class select
{
public static void main(String args[])
{
Sub d=new Sub();
d.ins();
d.sort();
}}


