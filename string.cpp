#include<iostream>
#include<string.h>
using namespace std;
class string
{
private:
char str1[50],str[50];
public:
int i;
void input()
{
cout<<"enter the string";
cin>>str1;
}
/*void operations()
{

for(i=0;i!="\0";i++)
{
i=strlen(str1)
}
cout<<"i\t"<<i;
 }*/
void copy()
{
 
for( i=0;str[i]!='\0';i++)
{
str1[i]=str[i];
}
str1[i]='\n';
cout<<str1;
}
void display()
{
cout<<"final string is"<<str1;
}
}ob;
int main()
{
//ob.operations();
ob.copy();
}





