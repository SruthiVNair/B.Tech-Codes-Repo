import java.util.*;
import java.io.*;
class ArrayDemo
{
void input()
{
int a[];
 a=new int[100];
Scanner s=new Scanner(System.in);
System.out.println("enter the limit");
int n=s.nextInt();
System.out.println("enter the elements");

for(int i=0;i<n;i++)
{
a[i]=s.nextInt();
}
System.out.println(" the array is");
for(int i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}
class Array
{
public static void main(String args[])
{
ArrayDemo ob=new ArrayDemo();
ob.input();
}
}
