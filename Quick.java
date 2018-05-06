import java.util.*;
import java.io.*;
class Quick
{
public static void main(String args[])
{
int n,i;
int a[]=new int[40];
Scanner x=new Scanner(System.in);
System.out.println("limit?");
n=x.nextInt();
System.out.println("elements");
for(i=0;i<n;i++)
{
a[i]=x.nextInt();
}
Sort obj=new Sort();
obj.partition(a,0,n-1);
System.out.println("after sorting");
for(i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}
class Sort
{
public void partition(int[]a,int start,int end)
{
int piv,temp,bpivot=0;
int left=start+1;
int right=end;
piv=start;
if(start>=end)
return;
System.out.println("\nsublist");
display(a,start,end);
while(bpivot==0)
{
while(a[piv]<a[right]&&piv!=right)
{
right--;

if(a[piv]>a[right])
{
temp=a[piv];
a[piv]=a[right];
a[right]=temp;
piv=right;
}
if(piv==right)
bpivot=1;
}
while(a[piv]>a[left]&&a[left]!=a[piv])
{
left++;
if(piv==left)
bpivot=1;
if(a[piv]<a[left])
{
temp=a[piv];
a[piv]=a[left];
a[left]=temp;
piv=left;
}
}}
System.out.println("pivot placed"+a[piv]);
display(a,start,end);
partition(a,start,piv-1);
}
void display(int a[],int start,int end)
{
int i;
for(i=start;i<=end;i++)
System.out.println(a[i]);
}
}





