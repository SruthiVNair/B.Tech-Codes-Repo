#include<iostream>
using namespace std;
class A
{
int x,y;
public:
	void read()
{
cout<<"enter the value of x y and z";
cin>>x>>y;
}
void display()
{
cout<<"x="<<x<<"\ty="<<y;
}
public:
void operator--()
{
x=(x--)+(y--);
y=(--x)+(--y);
}
};
int main()
{
A s;
s.read();
cout<<"before overloading the values are";
s.display();

--s;
cout<<"\nafter overloading the values are";
s.display();

return 0;

} 
