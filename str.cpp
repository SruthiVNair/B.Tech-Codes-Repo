#include<iostream>
#include<string.h>
using namespace std;
class stringss
{
char str[20],str1[20],str2[20];
int i,z,c;
public:
void copy()
{
 cout<<"\nenter the string....\n";
cin>>str;

cout<<"after copying to another string \t"<<strcpy(str1,str);
cout<<"\n";
}
void len()
{
cout<<"\nenter the string....\n";
cin>>str;


 z=strlen(str);
cout<<"length: \t"<<z<<"\n";
}
	void comp()
	{
	cout<<"enter the string1:";
	cin>>str;
	cout<<"enter the string2:";
	cin>>str1;
	c=strcmp(str,str1);
	if(c==0){
	cout<<"strings are same\n";}
	else
	cout<<"strings are not same\n";
	}
void concat()
{
	cout<<"enter the string1:";
	cin>>str;
	cout<<"enter the string2:";
	cin>>str1;
	cout<<strcat(str,str1);
}
};
int main()
{
stringss ob;
ob.copy();
ob.len();
ob.comp();
ob.concat();
return 0;
}
