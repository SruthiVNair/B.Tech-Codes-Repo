#include<iostream>
#include<string.h>
using namespace std;  
class st

{
private:
char a[100],b[100],c[100];

public:
void comb()
{

cout<<"enter the string";
cin>>a;
cout<<"enter the string";
cin>>b;
cout<<"combined string";
cout<<strcmp(a,b);
}
void len()
{
cout<<"enter the string";
cin>>a;
cout<<"length is"<<strlen(a);

}

void large()
{
int d;
cout<<"enter the string";
cin>>a;
cout<<"enter the string";
cin>>b;
d=strcmp(a,b);
if(d==0)
cout<<"both are same";
else if(d>0)
{
cout<<"large is";
cout<<a;
}
else
{

cout<<"large is";
}
}

};



main()
{
st obj;
char m;
cout<<"\n function";
cout<<"\n combine";
cout<<"\n restore";
cout<<"\n large";
cout<<"\n length";

cout<<"\n enter the string function to execute";
cin>>m;
switch(m)
{
case'+':obj.comb();break;
case'-':obj.len();break;
case'>':obj.large();break;
default:cout<<"invalid";
}
}
