import java.util.*;
import java.io.*;
class Inp
{
int i,j,temp,n;
int a[]=new int[50];
Scanner s=new Scanner(System.in);
void insert()
{
System.out.println("enter the limit");
n=s.nextInt();
System.out.println("enter elements");
for(i=0;i<n;i++)
{
a[i]=s.nextInt();
}
}
void sort()
{
for(j=1;j<n;j++)
{
temp=a[j];
i=j;
while((i>0)&&(a[i-1]>=temp))
{
a[i]=a[i-1];
--i;
}
a[i]=temp;
System.out.println("\npass"+j);

for(int l=0;l<n;l++)
{
System.out.println(a[l]);
}
System.out.println("sorted array");
for(int l=0;l<n;l++)
{
System.out.println(a[l]);}
/*for(i=0;i<n;i++)
{
System.out.println(a[i]);
}*/
}
}
}
class Insertionsort
{
public static void main(String args[])
{
Inp ss=new Inp();
ss.insert();
ss.sort();
}
}
