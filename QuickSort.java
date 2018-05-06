
/*public static void main(String args[])
{
int i,j;
Sort s=new Sort();
Scanner in=new Scanner(System.in);
System.out.println("limit");
n=in.nextInt();
System.out.println("enter array"); 
for(i=0;i<n;i++) 
{
a[i]=in.nextInt();
System.out.println(a[i]);}
s.fun(a,0,n-1);
System.out.println("sorted array");
for(i=0;i<n;i++){
System.out.println(a[i]);
}}
}
class Sort
{
int a[]=new int[25];
void fun(int a[],int start,int end)
{
int left=start;
int right=end;
int piv=start;
if(start>=end)
return;
System.out.println("sublist");
display(a,start,end);
while(int pivot==0)
{
while(a[piv]<a[right]&&piv!=right)
right=right-1;
if(piv==right)
pivot=1;
if(a[piv]>a[right])
{
int temp=a[piv];
a[piv]=a[right];
a[right]=temp;
piv=right;
}
while(a[piv]>=a[left]&&left!=piv)
left++;
if(piv==left)
pivot=1;
if(a[piv]<a[left])
{
temp=a[piv];
a[piv]=a[left];
a[left]=temp;
piv=left;
}
}
System.out.println("pivot placed"+a[piv]);
display(a,start,end);
fun(a,start,piv-1);
fun(a,piv+1,end);
}
void display(int a[],int start,int end){
int i;
for(i=start;i<=end;i++)
System.out.println(a[i]);
}
}*/
import java.util.*;
import java.io.*;
class Sub
{
void sort(int a[],int low,int up)
{
int piv,temp,left,right;
left=low;
right=up;
piv=low;
if(low>=up)
return;
System.out.println("sub");
display(a,low,up);
while(a[piv<=a[right]&&piv!=right)
right--;
if(a[piv]>a[right])
{
temp=a[piv];
a[piv]=a[right];
a[right]=temp;
piv=right;
System.out.println("pivot placed"+a[piv]);
display(a,low,up);
System.out.println("\n");
sort(a,low,piv-1);
sort(a,piv+1,up);
}
while(a[piv]>=a[left]&&left!=piv)
left++;
/*if(piv==left)
pivot=1;*/
if(a[piv]<a[left])
{
temp=a[piv];
a[piv]=a[left];
a[left]=temp;
piv=left;
}
void display(int []a,int low,int up)
{
int i;
for(i=low;i<=up;i++)
System.out.println(a[i]);
}
}
class QuickSort
{
public static void main(String args[])
{
Sub ob=new Sub();
int i;
int a[]=s.nextInt[34];
System.out.println("limit");
Scanner s=new Scanner(System.in);
int lim=nextInt();
System.out.println("elements");
for(i=0;i<lim;i++)
a[i]=s.nextInt();
ob.sort(a,0,lim-1);
System.out.println("sorted");
ob.display(a,0,lim-1);
}
}
