#include<iostream>
using namespace std;
class A
{
protected:
int n;
public:
void read()
{
cout<<"enter the number:";
cin>>n;
}
};
class B
{
protected:
int m;
public:
void input()
{
cout<<"enter number:";
cin>>m;
}
};
class C:public A,public B
{
public:
void multi()
{
cout<<"the product is"<<n*m;
}
};
int main()
{
C a;
a.read();
a.input();
a.multi();
return 0;
}
















































