// Program to demostrate default constructor in Inheritence

#include <iostream>
using namespace std;
class A {
	public:
		A() {
			cout << "Wellcome to class-A-Constructor !!" << endl;
		}
		A(int x) {
			cout << "Value of X = " << x << endl;
		}
};
class B : public A {
	public:
		B() {
			cout << "Wellcome to class-B-Constructor !!" << endl;
		}
		B(int q) : A(q){	//recives 10 using q and send q to class A
			cout << "Value of Q = " << q << endl;	
		}
};
class C : public B {
	public:
		C() 
		{
			cout << "Wellcome to class-C-Constructor !!" << endl;
			
		}
		C(int p) : B(p){	//recives 10 using p and send p to class B
			cout << "Value of P = " << p << endl;
		}
};
int main() {
	
	C cc(10);

	return 0;
}