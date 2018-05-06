#include<iostream>
using namespace std;
class calculator
{
private:
int  x,y,s,m,p,d ;         ;
public:
	void input()
	     {
		cout<<"enter the numbers";
		cin>>x>>y;
	    }
	void add1()
	    {
		s=x+y;
		cout<<s;
	    }
	void diff1()
	  {
		m=x-y;
		cout<<m;
	   }
	void pdt1()
	  {

		p=x*y;
		cout<<p;
	}
	void div1()
	  {
		d=x/y;
	       	cout<<d;
	  }
};
int main()
{
int ch;
calculator c;
cout<<"\n1.+\n2.-\n3.*\n4./";
while(ch<5)
{
cout<<"Select the operator:";
cin>>ch;

switch(ch)
{

case 1:c.input();
c.add1();
break;
case 2:c.input();
c.diff1();
break;
case 3:c.input();
c.pdt1();
break;
case 4:c.input();c.div1();
break;
default:cout<<"Invalid Chioce!!!"; 

}
}
return 0;
}
