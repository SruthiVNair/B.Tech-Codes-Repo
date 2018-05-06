import java.util.*;
import java.io.*;
class Sort
{
public static void sorting(int []a,int lb,int ub)
{
int i,j,n;
n=lb-ub;
if(n==1)
return(0);
int mid=(lb+ub)/2;
sorting(a,lb,mid);
sorting(a,mid,ub);
int temp[]=new int[n];
i=lb;
j=mid;
for(int k=0;k<n;k++)
{
if(i==mid)
temp[k]=a[j++];
else if(j==ub);
temp[k]=a[i++];
else if(a[j]<a[i])
temp[k]=a[j++];
/*else 
temp[k]=a[j++];*/
else
temp[k]=a[i++];}
for(k=0;k<n;k++)
{
a[lb+k]=temp[k];
}}}
class Mergesort
{
public static void main(String args[])
{
int i,j;
System.out.println("limit");
Scanner s=new Scanner(System.in);
n=s.nextInt();
System.out.println("elements");
for(int i=0;i<n;i++)
{
//System.out.println(a[l]);
a[i]=s.nextInt();
}
s.sorting(a,0,n);
System.out.println("sorted array");
for(int i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}





