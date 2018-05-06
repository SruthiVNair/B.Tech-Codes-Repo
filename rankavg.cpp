#include<iostream>
using namespace std;
class student
{
private:
char name[40];
int rollno ;
int m[3];
public:
	int i,j,temp;
	float s;
	float ag;
	
void input()
{
ag=0.0;
s=0.0;
cout<<"enter name";
cin>>name;
cout<<"enter rollno";
cin>>rollno;
cout<<"enter marks";
for(i=0;i<3;i++)
{
cin>>m[i];
}
for(i=0;i<3;i++)
{
for(j=0;j<3-i;j++)
 {
if(m[j]>m[j+1])
{
temp=m[j];
m[j]=m[j+1];
m[j+1]=temp;
}
}
}
for(i=0;i<3;i++)
{
s=s+m[i];
}
ag=(float)s/2;
}
void display()
{
cout<<"\n";
cout<<name<<"\t"<<rollno<<"\t"<<"\t"<<ag;
}
};
int main()
{
int i;
student st[10];
for(i=0;i<3;i++)
{
st[i].input();
}
for(i=0;i<3;i++)
{
st[i].display();
}
return 0;
}
