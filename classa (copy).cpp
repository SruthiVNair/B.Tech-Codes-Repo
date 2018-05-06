#include<iostream>
using namespace std;
class A
{
private:
int x,y;
public:
void input()
{
cout<<"enter x and y";
cin>>x>>y;
}
void display()
{
cout<<"values of x and y"<<x<<"  "<<y;
}
};
int main()
{
A a1;
a1.input();
a1.display();
return 0;
}



