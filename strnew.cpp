#include<iostream>
#include<string.h>
using namespace std;
class st
{
public:
int c,z;
char str1[20],str2[20],str3[20]/*,str4[20]*/;
public:
void input()
{
cout<<"enter first string:\n";
cin>>str1;
cout<<"\nenter second string:";
cin>>str2;
cout<<"\nfirst string:\n"<<str1;
cout<<"\nsecond string:"<<str2;
}
void copy()
{

cout<<"\nstring3 after copying\t"<<strcpy(str3,str1);
}
void comp()
{
c=strcmp(str1,str2);
if(c==0)
{
cout<<"\nboth strings are same";
}
else
cout<<"\nboth strings are not same";
}
void concat()
{

cout<<"\nstring 4 is:"<<strcat(str1,str2);
}
void length()
{
cout<<"\nlength of string2:\t"<<strlen(str2);
}};
int main()
{
st s;
s.input();
s.copy();
s.length();
s.comp();
s.concat();
return 0;
}





