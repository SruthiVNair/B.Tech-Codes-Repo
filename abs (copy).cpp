#include<iostream>
#include<math.h>
using namespace std;
class A
{
private:

public:
int p; 
float q;
int abs(int a )
{
p=a;
return(abs(p));
}
float abs(float b)
{
q=b;
return(abs(q));
}
};
int main()
{
int x;float y;

int a=-12;
float b=-12.34;
A r;
x=r.abs(a);
y=r.abs(b);
cout<<x<<y;
}

