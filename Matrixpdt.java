import java.util.*;
import java.io.*;
class Pdt
{int i,j,n,m,p,q,k;
void input()
{

System.out.println("enter the orders");
Scanner s=new Scanner(System.in);
int p=s.nextInt();
int q=s.nextInt();
int m=s.nextInt();
int n=s.nextInt();
int a[][];
a=new int[50][50];
int b[][];
b=new int[50][50];
if(m==p&&n==q)
{
System.out.println("enter the elements of matrix1");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
a[i][j]=s.nextInt();
}
}

System.out.println("enter the elements of matrix2");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
b[i][j]=s.nextInt();
}
}

for(i=0;i<n;i++)
{System.out.print("\n");
for(j=0;j<m;j++)
{
System.out.print("\t"+a[i][j]);
}
}System.out.print("\n");
for(i=0;i<n;i++)
{System.out.print("\n");
for(j=0;j<m;j++)
{
System.out.print("\t"+b[i][j]);
}
}
System.out.print("\n");
int c[][];
c=new int[50][50];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}}
System.out.println("product of matrices");
for(i=0;i<n;i++)
{System.out.print("\n");
for(j=0;j<m;j++)
{
System.out.print("\t"+c[i][j]);
}
}}
else 
System.out.println("not possible");
}}

class Matrixpdt 
{
public static void main(String[] args)
{
Pdt j=new Pdt();
j.input();
}
}


