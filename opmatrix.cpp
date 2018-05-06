#include<iostream>
using namespace std;
class matrix
{
public:
int i,j,p,m,n,q,b[20][20],a[20][20],c[20][20];
public:
void input()
{
cout<<"enter the order of first square matrix:";
cin>>p>>q;
cout<<"enter the order of second square matrix:";
cin>>m>>n;
cout<<"enter the elements of first matrix:";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cin>>a[i][j];
}
}
cout<<"enter the elements of second matrix:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>b[i][j];
}
}

	void operator+() 
	{
	for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	}
	}

	cout<<"\nSUM\n";
	for(i=0;i<p;i++)
	{cout<<"\n";
	for(j=0;j<q;j++)
	{cout<<"\t";
	cout<<c[i][j];
	}
	}
	}
/*for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[i][j]);
}
}
}
	
	{
	cout<<"\nPRODUCT\n";
	for(i=0;i<p;i++)
	{cout<<"\n";
	for(j=0;j<q;j++)
	{cout<<"\t";
	cout<<c[i][j];
	}
	}
	}*/
};

int main()
{
matrix m;
m.input();
+ m;
}

