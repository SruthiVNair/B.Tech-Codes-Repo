import java.util.*;
import java.io.*;
class sub
{

int i,j,n,min,loc,temp;
int a[]=new int[25];
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
temp=a[j];
a[j]=a[loc];
a[loc]=temp;
}
System.out.println("\npass"+(j+1));
for(int k=0;k<n;k++)
{
System.out.println(a[k]);
}
}
}
}
class SelectionSort
{
public static void main(String args[])
{
sub q=new sub();
q.ins();
q.sort();
}
}










