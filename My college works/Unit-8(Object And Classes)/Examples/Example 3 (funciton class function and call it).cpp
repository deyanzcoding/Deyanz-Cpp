//demonstrate consecpt of class

#include<iostream>
using namespace std;

class test
{
	public:
		void print()
		{
			cout<<"print : My name is deyan.\a"<<endl;
		}
		void print1()
		{
			cout<<"print1 : My name is usaf.";
		}
};

int main()
{
test t1;
t1.print();   //call of the function which is already difine in class test.
t1.print();
return 0;
}
