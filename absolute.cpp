#include<iostream>
#include<stdlib.h>
using namespace std;
#include<math.h>
class value
  {
    private :
    int x;
    float y;
    public :
    int absolute( int i)
     {
       x=i;
       return abs(x);
     }
    float absolute( float f)
     {
       y=f;
        return fabs(y);
     }
 };
int main()
 {
   value v;
cout<<"enter the integer:";
   int a;
cin>>a;
cout<<"enter the floating point number:";
   float b;
cin>>b;
   a=v.absolute(a);
   b=v.absolute(b);
   cout<<"the absolute values are :"<<a<<","<<b;
   return 0;
  }
