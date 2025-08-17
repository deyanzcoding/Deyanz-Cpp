// experiment : 
// if there well be parameterize constructor present then default constructor not be called (base / derived).

#include <iostream>
using namespace std;

class A {
	public:
		A(int a) {
			cout << "A = " << a << endl;
		}
};
class B : public A{
	public:
		
		B(int a) : A(a) {
			cout << "I am default in B " << endl;
		}
//		B() {
//			cout << "I am default constructor in B" << endl;
//		}
};


int main() {
	
	B bb(10);

return 0;
}
