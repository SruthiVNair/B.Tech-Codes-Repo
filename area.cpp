#include<iostream>
using namespace std;
class Area
{
 float a;
 public:
  void area(int s)
  {
   a=s*s;
   cout<<"\nAREA OF SQUARE: "<<a;
  }
  void area(int l, int b)
  {
   a=l*b;
   cout<<"\nAREA OF RECTANGLE: "<<a;
  }
  void area(float r)
  {
   a= 3.14*r*r;
   cout<<"\nAREA  OF CIRCLE: "<<a<<"\n\n";
  }
};

int main()
{
 Area A;
 int s,l,b;
 float r;
 cout<<"ENTER SIDE OF SQUARE: ";
 cin>>s;
 cout<<"ENTER LENGTH & BREADTH OF RECTANGLE: ";
 cin>>l>>b;
 cout<<"ENTER RADIUS OF CIRCLE: ";
 cin>>r;
 A.area(s);
 A.area(l,b);
 A.area(r);
 return 0;
}

 
