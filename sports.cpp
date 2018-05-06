#include<iostream>
using namespace std;
class student
{
protected:
int rno ;
public:

void read()
{
cout<<"enter rollno";
cin>>rno;
}
};
class test:virtual public student
{
protected:
int m1,m2;
public:
void mark()
{
cout<<"enter marks";
cin>>m1>>m2;
}
};
class sports:virtual public student
{
protected:
int sp;
public:
void spm()
{
cout<<"enter the sports mark";
cin>>sp;
}
};
class result:public test,public sports
{
public:
void res()
{
cout<<"total mark="<<m1+m2+sp;
}
};
int main()
{
result a;
a.read();
a.mark();
a.spm();
a.res();
return 0;
}










