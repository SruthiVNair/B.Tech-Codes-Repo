#include<iostream>
using namespace std;
class bank
{
private:
int n;
float s,p,r,q;
public:
void input()
{
cout<<"enter the principal amount";
cin>>p;
cout<<"enter the no. of years";
cin>>n;
cout<<"enter the rate of interest";
cin>>r;
}
void display()
{
//cout<<p;
//cout<<n;
//cout<<r;
cout<<"total amount after" <<n<<"  years:"<<q ;
}
void total()
{
s=float(p*n*r)/100;
q=s+p;
}
};
int main()
{
bank w;
w.input();
w.total();
w.display();
}


