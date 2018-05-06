import java.util.*;
import java.io.*;
class Sub
{
int i,j,loc,n,min;
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
}System.out.println("hi");
}
void sort()
{
for(j=0;j<n-1;j++)
{
min=a[j];
for(i=j+1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
loc=i;
}
}
while(min!=a[j])
{
int temp=a[j];
a[j]=a[loc];
a[loc]=temp;
}
}                                                                                                                                                            System.out.println("pass "+j);
for(i=0;i<n;i++)
{
//System.out.println("pass"+"");
System.out.println(a[i]);

}
}
}
class Selection
{
public static void main(String args[])
{
Sub q=new Sub();
q.ins();
q.sort();
}}




