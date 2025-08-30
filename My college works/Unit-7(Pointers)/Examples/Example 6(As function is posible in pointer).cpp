// As function is possible in Pointer.

#include<iostream>
using namespace std;
void deyan() {
	cout<<"Hello World!!"<<endl;
}

int main() {
	void*x;

	x=&deyan();   // Not Valid!

	cout<<"Function is : "<<&deyan();

	return 0;
}
