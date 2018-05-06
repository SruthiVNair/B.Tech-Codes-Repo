import java.io.*;
import java.util.*;
class Sub
{
void input()
	{
int a[];
 a=new int[50];
Scanner s=new Scanner(System.in);
System.out.println("enter the limit");
int u=s.nextInt();
int i;
System.out.println("enter the elements in an ordered manner");
for(i=0;i<u;i++)
	{
a[i]=s.nextInt();
	}
System.out.println("enter the element to be inserted and its location");
int ele=s.nextInt();
int loc=s.nextInt();
if(loc<u)
	{
i=u;
while(i>loc)
	{
	a[i]=a[i-1];
i--;
	}
	a[loc-1]=ele;
	u++;
	}
else
{
System.out.println("the array insertion not possible");
}
System.out.println("after insertion array is");
for(int j=0;j<u;j++)
{
System.out.println(a[j]);
}
}}

class Insertion
{
public static void main(String[] args)
{
Sub l=new Sub();
l.input();
}}


