
#include<iostream>
using namespace std;
class S
{ 
 int temp;
 public:
 void swap1(int a, int b)
 {
  temp=a;  
  a=b;
  b=temp;
  cout<<"\nSwaped values by call by value: "<<a<<"  "<<b;
  }
  void swap2(int &a, int &b)
  {
  temp=a;
  a=b;
  b=temp;
  }
  void swap3(int *a, int *b)
  {
  temp=*a;
  *a=*b;
  *b=temp;
  }  

};

int main()
{
 S s;
 int x,y;
 cout<<"Enter two nos: ";
 cin>>x>>y;
 s.swap1(x,y);
 s.swap2(x,y);
 cout<<"\nswaped values by call by refference: "<<x<<"  "<<y; 
 s.swap3(&y,&x);
 cout<<"\nSwaped values by call by address: "<<x<<"  "<<y<<"\n\n";
 return 0;
}
