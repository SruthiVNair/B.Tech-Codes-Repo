#include<iostream>
using namespace std;
class A
{
int c;
public:
void swap1(int a,int b)
{
c=a;
a=b;
b=c;

cout<<"\n SWAPED VALUES BY CALL BY VALUE: "<<a<<"  "<<b;
}
void swap2(int &a, int &b)
{
c=a;
a=b;
b=c;
}
void swap3(int *a, int *b)
{
c=*a;
*a=*b;
*b=c;
}  
};
int main()
{
A b;
int x,y;
cout<<"Enter two numbers:";
cin>>x>>y;
b.swap1(x,y);
b.swap2(x,y);
cout<<"\n SWAPED VALUES BY CALL BY REFERENCE: "<<x<<"  "<<y; 
b.swap3(&y,&x);
cout<<"\n SWAPED VALUES BY CALL BY ADDRESS: "<<x<<"  "<<y<<"\n\n";
return 0;
}
