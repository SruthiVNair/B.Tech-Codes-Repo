#include<iostream>
using namespace std;
class bill
{
private:
int unit;
public:
int Rs; 
void input()
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
cout<<"enter the unit" ;
cin>>unit;  
}
void display()
	{
	if (unit<=100)
	{
	Rs=unit*1;
	} 
	else if(unit>100&&unit<=200)
	{
	int x;
	unit=unit-100;
	x=unit*1.2;
	Rs=100+x;
	}
	else if(unit>200&&unit<=300)
	{
	int w,z,rs1,q;
	w=unit-200;
	rs1=w*2;
	q=unit-w;
	cout<<rs1<<"\n";
	if(q>100)
	{
	z=q-100;
	z=z*1.20;
	cout<<z<<"\n";
		}
	Rs=100+rs1+z;;
	}
	else(unit>300)
	{
	int a,b c,d,rs2,rs3,rs4;
	a=unit-300;
	rs2=a*3;
	cout<<rs2;
	b=unit-a;
	if(b>200)
	{
	c=b-200;
	rs3=c*2;
	cout<<rs3;
	d=unit-b;
	}
if(d>100)
{
rs4=d*1.20;
cout<<rs4;
}
Rs=100+rs2+rs3+rs4;
}}
cout<<"amount is"<<Rs;
}
};
int main()
{
bill user;
user.input();
user.display();
}












