#include<iostream>
using namespace std;
class BASE
{
int a;
public:
int b;
void getData()
{
cout<<"enter the first no.";
cin>>a;
cout<<"enter the second no.";
cin>>b;
}
void Display()
{
cout<<"value of a ="<<a<<"\n value of b="<<b;
}
friend class DERIVED;
};
class DERIVED:public BASE
{
public:
int x;
void multi()
{
x=a*b;
cout<<"\n product="<<x;
}
};
int main()
{
DERIVED z;
z.getData();
z.Display();
z.multi();
return 0;
}

