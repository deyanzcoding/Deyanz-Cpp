// Program to demostrate default constructor in Inheritence

#include <iostream>
using namespace std;
class A {
	public:
		A() {
			cout << "Wellcome to class-A-Constructor !!" << endl;
		}
	
};
class B : public A {
	public:
		B() {
			cout << "Wellcome to class-B-Constructor !!" << endl;
		}
	
};
class C : public B {
	public:
		C() 
		{
			cout << "Wellcome to class-C-Constructor !!" << endl;
			
		}
};
int main() {

	C cc;

	return 0;
}