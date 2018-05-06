#include<iostream>
using namespace std;
class item
{
public:
int code;
float price;
public:
void input()
{
cout<<"enter the code";
cin>>code;
cout<<"enter the price";
cin>>price;
};
public:
void display()
{
cout<<code<<" "<<price;
};
};
int main()
{
item i;
item *ptr;
ptr=&i;
ptr->input();
ptr->display();
return 0;
}
