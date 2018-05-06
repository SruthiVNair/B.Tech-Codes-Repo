#include<iostream>
#include<string.h>
using namespace std;
class letters
	    {
	      char str[50];
	      int l,l1;
	      public:
   		   void read();
		   void oper();
	    };
void letters::read()
{
int i;
for( i=0;i<"\n";i++)
{
 cin.get(str[i]);
}
for( i=0;str[i]!='\0';i++)
{
cout.put(str[i]);
}
l=strlen(str);
cout<<"length of first string="<<l;
}
int main()
{
letters ob1;
ob1.read();
return(0);
}



