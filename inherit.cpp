#include<iostream>
#include<math.h>
using namespace std;
class student
{
protected:
char name[40];
int regno,age;
public:
void get()
{
cout<<"\nname:";
cin>>name;
cout<<"reg no.";
cin>>regno;
cout<<"age";
cin>>age;
}
};
class UG:public student
{
public:
float semfee1,avg;
int m1,m2,total;
public:
void getUg()
{
cout<<"enter the semester fee ";
cin>>semfee1;
cout<<"enter marks";
cin>>m1>>m2;
total=m1+m2;
avg=(total)/2;
}
public:
void calc()
{
cout<<semfee1<<"\n";

cout<<total<<"\n"<<avg;
}
};
class PG:public student
{
public:
int m3,m4,tot;
int stipent;
float semFee2,avgg;
public:
void getPG()
{
cout<<"enter semester fee";
cin>>semFee2;

cout<<"enter marks";
cin>>m3>>m4;
tot=m3+m4;
avgg=(tot)/2;
}
public:
void call()
{
cout<<" \nstipent=Rs.10000\n";
cout<<semFee2<<"\n";
cout<<tot<<"\n"<<avgg;
}
};
int main()
{
UG obj[10];
int i=0;
for(i=0;i<2;i++)
{
obj[i].get();
obj[i].getUg();
obj[i].calc();
}
PG ob[12];
int j=0;
for(j=0;j<2;j++)
{
ob[j].get();
ob[j].getPG();
ob[j].call();
}
return 0;
}











