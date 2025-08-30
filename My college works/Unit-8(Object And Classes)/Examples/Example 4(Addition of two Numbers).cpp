

#include<iostream>
using namespace std;

class addition {
	private :   // Variable of access specifier is called 'data members'.
		int a,b;
	public : 	//function is called member function.
		void getData() {
			cout<<"Enter Two Numbers : ";
			cin>>a>>b;
		}
		void putData() {
			cout<<"\nAddition = "<<a+b;
		}
};

int main() {
	addition aa;    //object creation.

	aa.getData();  //to get integers from user.
	aa.putData();  //to print(cout) the addition(output).
	return 0;
}
