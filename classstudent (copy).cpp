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
cout<<name<<"\n"<<rollno<<"\n"<<m1<<"\n"<<m2<<"\n"<<m3;
}
};
int main()
{
student ANU;
ANU.input();
ANU.display();
return 0;
}

