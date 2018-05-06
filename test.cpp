#include<iostream>
using namespace std;
class student
{
protected:
int rno;
public:
void read()
{
cout<<"enter roll no:";
cin>>rno;
}
};
class test:public student
{
protected:
int m1,m2;
public:
void mark()
{
cout<<"enter the marks";
cin>>m1>>m2;
}
};
class result:public test
{
public:

void sum()
{
cout<<"the result is:"<<m1+m2;
}
};
int main()
{ 
result obj;
obj.read();
obj.mark();
obj.sum();
return 0;
}
