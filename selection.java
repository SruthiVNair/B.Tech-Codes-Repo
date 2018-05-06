import java.util.*;
import java.io.*;
class Sub
{

int i,j,pos,n,q,swap;
int a[]=new int[25];
void in()
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

