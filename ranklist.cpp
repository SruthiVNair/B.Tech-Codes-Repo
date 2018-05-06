#include<iostream>
using namespace std;
class student
{
private:
char name[40];
int rollno ;
int m1,m2,m3;
public:
int total;
void input()
{
cout<<"enter name";
cin>>name;
cout<<"ente

r rollno";
cin>>rollno;
cout<<"enter marks";
cin>>m1>>m2>>m3;

total=m1+m2+m3;
}
void display()
{
//cout<<"\nname    "<<name<<"\nrollno  "<<rollno<<"\nmarks\n"<<m1<<"\n"<<m2<<"\n"<<m3<<"\n"<<total;
cout<<"\n";

cout<<name<<"\t"<<rollno<<"\t"<<total<<"\t";
}
};
int main()
{
student st[10],temp;		
int i,n,j;
cout<<"enter the limit";
cin>>n;
for(i=0;i<n;i++)
{
st[i].input();
}
for(i=0;i<n;i++)
{
st[i].total;
}
for(i=0;i<n;i++)
 {
for(j=0;j<n-i-1;j++)
 {
 if(st[j].total<st[j+1].total)
  {
	temp=st[j];
	st[j]=st[j+1];
	st[j+i]=temp;
   }
 }
 }
cout<<"name\t"<<"roll\t"<<"Total\n";
for(i=0;i<n;i++)
{
st[i].display();
}

return 0;
}
