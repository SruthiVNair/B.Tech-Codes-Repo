#include<iostream>
using namespace std;
int main()
{
int m,n,p,q,a[10][10],b[10][10],c[10][10],d[10][10],i,j,k;
cout<<"order of first matrix"; 
cin>>m>>n;
cout<<"order of second matrix"; 
cin>>p>>q;
if(m==p&&n==q)
{
cout<<"enter the elements of first matrix";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}}
cout<<"enter the elements of second matrix";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{cin>>b[i][j];}}
for(i=0;i<m;i++)
{for(j=0;j<q;j++)
{c[i][j]=a[i][j]+b[i][j];
}}cout<<"sum of matrices is:";
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<q;j++)
{
cout<<c[i][j]<<"\t";
}}
for(i=0;i<m;i++)
{for(j=0;j<q;j++)
{d[i][j]=0;
{for(k=0;k<q;k++)
d[i][j]=d[i][j]+(a[i][k]*b[k][j]);}}}
cout<<"\n";
cout<<"product of the matrices:";
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<q;j++)
{cout<<d[i][j]<<"\t";
}}}
else cout<<"invalid matrix";
return 0;
}
