import java.util.*;
import java.io.*;
class sorts
{
int l=1;
void sort(int a[])
{
quicksort(a,0,a.length-1);
}
void quicksort(int a[],int left,int right)
{
int i=left,j=right;
int temp;
int pivot=a[(left+right)/2];
while(i<j)
{
while(a[i]<a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<=j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
System.out.println("pass"+(l));
for(int k=0;k<a.length;k++)
System.out.println(a[k]+" ");
System.out.println();
l++;
if(left<j)
return;
quicksort(a,left,j);
if(i<right)
quicksort(a,i,right);
}
}}
class Quicksort
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
int n,i;
int a[]=new int[20];
System.out.println("limit?");
n=s.nextInt();
System.out.println("elements");
for(i=0;i<n;i++)
a[i]=s.nextInt();
sorts obj=new sorts();
obj.sort(a);
for(i=0;i<n;i++)
System.out.println(a[i]+"");
}
}
