#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream obj;
obj.open("lang.txt",ios::out);
obj<<"c++ is a beautiful language"<<" ";
obj.close();
obj.open("lang.txt",ios::app);
obj<<"but many students find it difficult to learn";
obj.close();
const int N=80;
char line[N];
ifstream fin;
fin.open("lang.txt");
while(fin)
{
 	fin.getline(line,N);
	cout<<line;
}
fin.close();

}

