#include<iostream>
using namespace std;
int main()
{
int a,b,c,r,m,n;
cout<<"lower range"<<" upper range";
cin>>m>>n;
for(a=m;a<=n;a++)
{
c=0;
for(b=2;b<=a/2;b++)
{
r=a%b;
if(r==0)
{
c++;
break;
}}
if(c==0&&a!=1)
{
cout<<a<<"\t";
}}
return 0;
}
