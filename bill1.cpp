 #include<iostream>
using namespace std;
class bill
{
private:
int unit;
public:
int Rs; 
void input()
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
cout<<"enter the unit" ;
cin>>unit;  
}
void calc()
	{
	if (unit>300)
	{
	Rs=(unit-300)*3+100*2+100*1.2+100;
	} 
	else if(unit<=300&&unit>200)
	{
	Rs=(unit-200)*2+100*1.2+100;
	}
	else if(unit<=200&&unit>100)
	{
	Rs=(unit-100)*1.2+100;
	}else Rs=unit*1;}
void display()
{
cout<<"unit ="<<unit<<"\nBILL AMOUNT="<<"Rs."<<Rs;
}	
};
int main()
{
bill user;
user.input();
user.calc();
user.display();
}












