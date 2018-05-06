#include<iostream>
using namespace std;
class employee
{
private:
int p,d,s,n,i;
int emp_id;
char name[40];
public:
void input()
{
cout<<"enter name";
cin>>name;
cout<<"emp_id";
cin>>emp_id;
cout<<"basic pay:";
cin>>p;
}
void display()
{int g;
d=(52*p)/100;
g=d+p;
i=(30*g)/100;
n=p+d-i;
cout<<"\n...EMPLOYEE DETAILS\n"<<"emp_id:"<<emp_id<<"\n"<<"pay"<<p<<"\nda:"<< d<<"\nincome tax"  <<i<<"\nnet salary:" <<n;                               
}
};
int main()
{
employee anu;
anu.input();
anu.display();
}
