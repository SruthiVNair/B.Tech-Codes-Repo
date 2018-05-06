#include<iostream>
using namespace std;
class student
{
private:
int rollno;
char name[20];
int ma[3],i,j,t;
float avg,s;
public:
void input()
{
cout<<"enter the rollno"<<"\n";
cin>>rollno;
cout<<"enter the name"<<"\n";
cin>>name;
cout<<"enter the mark in 3 test"<<"\n";
for(i=0;i<3;i++)
cin>>ma[i];
for(i=0;i<3-1;i++)
for(j=i+1;j<3;j++)
if(ma[i]<ma[j])
{
t=ma[i];
ma[i]=ma[j];
ma[j]=t;
}
avg=0.0;
s=0.0;
for(i=0;i<2;i++)
s=(float)s+ma[i];
avg=s/2;
}
void display()
{
cout<<"rollno:"<<"\t";
cout<<rollno<<"\n";
cout<<"name:"<<"\t";
cout<<name<<"\n";
cout<<"average:"<<"\t";
cout<<avg<<"\n";
}
}a[50];
int main()
{
int n,i;
cout<<"enter no of students\n";
cin>>n;
for(i=0;i<n;i++)
a[i].input();
for(i=0;i<n;i++)
a[i].display();
}
