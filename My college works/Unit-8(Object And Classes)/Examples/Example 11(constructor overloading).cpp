// Constructor overloading

#include<iostream>
using namespace std;

class deyan
{
	public : 
	deyan(int a,int b)
	{
		cout<<"1) Addition of "<<a<<"+"<<b<<"="<<a+b;
	}
	deyan()
	{
		int a,b,c;
		cout<<"Enter 2 Integers (with spaces) :"<<endl;
		cin>>a>>b;
		
		c=a+b;
		cout<<"2) Addition of "<<a<<"+"<<b<<"="<<c<<endl;
	}
};

int main()
{
deyan dd1;
cout<<endl;
deyan dd2(2,4);



return 0;
}
