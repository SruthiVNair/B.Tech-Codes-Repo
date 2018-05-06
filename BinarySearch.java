import java.util.*;
import java.io.*;
class sub
{

int i,j,fst,mid,last,search,n;
int a[]=new int[25];
void in()
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
for(i=0;i<n-1;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
int swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}}}
System.out.println("sorted list");
for(i=0;i<n;i++)
{
System.out.println(a[i]+"\t");
}
}
void calc()
{
System.out.println("element to be found?");
Scanner s=new Scanner(System.in);
search=s.nextInt();
fst=0;
last=n-1;
mid=(last+fst)/2;
while(fst<=last)
{
if(a[mid]<search)
fst=mid+1;
else if(a[mid]==search)
{
System.out.println("found at"+(mid+1));
break;
}
else
last=mid-1;
mid=(fst+last)/2;
}
if(fst>last)
System.out.println("not found");
}
}
class BinarySearch
{
public static void main(String args[])
{
sub q=new sub();
q.in();
q.sort();
q.calc();
}
}









