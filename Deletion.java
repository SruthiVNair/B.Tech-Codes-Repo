import java.util.*;
import java.io.*;
class Sub
{
int i,u,p;
void input()
{
Scanner s=new Scanner(System.in);
int a[]=new int[50];

System.out.println("enter the limit");
 u=s.nextInt();

System.out.println("enter the elements in an ordered manner");
for(i=0;i<u;i++)
	{
a[i]=s.nextInt();
}	


System.out.println("enter the location at which deletion have to be done");
 p=s.nextInt();
for(i=p;i<u;i++)
{
a[i]=a[i+1];
u=u-1;

}
System.out.println("after deletion array is");
for(int j=0;j<u;j++)
{
System.out.println(a[j]);
}
}
}
class Deletion
{
public static void main(String[] args)
{
Sub z=new Sub();
z.input();

}}


