#include<iostream>
using namespace std;  
class A
{private:
static int count;
public:
static int x;
A()
{x++;}
static void disp()
{
cout<<"the no of objects"<<"\t" <<x<<"\t" ;
}
};
int A::x=0;
main()
{
A a,b,c,d;
A::disp();
}

