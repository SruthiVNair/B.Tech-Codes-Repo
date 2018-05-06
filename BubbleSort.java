import java.util.*;
import java.io.*;
class sub
{

int i,j,swap,n;
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
 swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
System.out.println("pass"+(i+1));
for(int q=0;q<n;q++)
{
System.out.println("\t"+a[q]);
}
}}
}
}

class BubbleSort
{
public static void main(String args[])
{
sub z=new sub();
z.in();
z.sort();
}
}







