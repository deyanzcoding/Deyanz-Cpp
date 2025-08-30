#include<iostream>
#include<fstream>
using namespace std;

int main(){
char ch[40];
ifstream flag("D:\\Utility Apps/deyan.txt");
cout<<"Output is : \n"<<endl;

while(!flag.eof())
{
	flag>>ch;
	cout<<ch<<endl;
}
flag.close();

return 0;	
}