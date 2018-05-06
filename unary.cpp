#include<iostream>
using namespace std;
class space
{
int x,y,z;
public:
void input()
{
cout<<"enter the values for x,y and z";
cin>>x>>y>>z;
}public:
void display()
{
cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z;
}

void operator-()
{
x=-x;
y=-y;
z=-z;
}

};
int main()
{
space s;
s.input();
s.display();
-s;
s.display();
}

