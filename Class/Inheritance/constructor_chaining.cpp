// Constructor Chaining		[and also answer of "How to call more then 1 constructor from base through 1 derived class construtor" ]

#include <iostream>
using namespace std;

class A {
	public :
		A(int a) : A(20, a) {
			cout << "\n\nCalling to 1 argm [A]" << endl;
			cout << "A = " << a << endl;
		}
		
		A(int b, int c) {
			cout << "\n\nCalling to 2 argm [A]" << endl;
			cout << "B = " << b << endl;
			cout << "C = " << c << endl;
		}
};

class B : public A{
	public:
		B(int x) : A(45) {
			cout << "\n\nCalling to 1 argm [B]" << endl;
			cout << "X = " << x << endl;
		}
};
int main() {

	B obj(50);


return 0;
}
