#include<iostream>
using namespace std;
class student
{
private:
char name[40];
int rollno ;
int m1,m2,m3;
public:
void input()
{
cout<<"enter name";
cin>>name;
cout<<"enter rollno";
cin>>rollno;
cout<<"enter marks";
cin>>m1>>m2>>m3;


}
void display()
{
cout<<"\nname  "<<name<<"\nrollno  "<<rollno<<"\nmarks\n"<<m1<<"\n"<<m2<<"\n"<<m3;
}
};
int main()
{
student st[10];		
int i,n;
cout<<"enter the limit";
cin>>n;
for(i=0;i<n;i++)
{
st[i].input();}
for(i=0;i<n;i++)
{
st[i].display();
}
return 0;
}
