import java.util.*;
import java.io.*;
class Merge
{
public static void sort(int a[],int low,int high)
{
int n=high;
if(low==high)
return;
int mid=(low+high)/2;
sort(a,low,mid);
sort(a,mid+1,high);
//sort(a,low,mid+1,high);
int temp[]=new int[n];
int i=low,j=mid;
for(int k=0;k<n;k++)
{
if(i==mid)
temp[k]=a[j++];
else if(j==high)  
temp[k]=a[i++];
else if(a[j]<a[i])
temp[k]=a[j++];
else
temp[k]=a[i++];
}
for(int k=0;k<n;k++)
a[(low+k)]=temp[k];
}
public static void main(String args[])
{
int a[]=new int[100];
int n,i;
Scanner s=new Scanner(System.in);
System.out.println("limit?");
n=s.nextInt();
System.out.println("enter the array");
for(int k=0;k<n;k++)
{
a[k]=s.nextInt();
}
sort(a,0,n);
System.out.println("sorted array");
for(int k=0;k<n;k++)
{
System.out.println(a[k]);
}
}}
