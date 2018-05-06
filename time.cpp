#include<iostream>
using namespace std;
class time1
{
private:
int s,h,m;
public:
void input()
{
cout<<"enter the time in seconds";
cin>>s;
}
void display()
{int t;
h=s/(60*60);
t=s%(60*60);
m=t/60;
s=t%60;
cout<<"time in hours,minutes and seconds are "<<h<<","<<m<<"and"<<s<<"respectively \n";
}
};
int main()
{
time1 T;
T.input();
T.display();
}
