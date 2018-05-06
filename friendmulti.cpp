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
cout<<"values of a and b are"<<a<<b;
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
cout<<"product="<<x;
}
};
int main()
{
DERIVED z
z.getData();
z.Display();
z.multi();
return 0;
}

