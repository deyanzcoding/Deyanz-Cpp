// experiment : 
// if there well be parameterize constructor present then default constructor not be called (base / derived).

#include <iostream>
using namespace std;

class A {
	public:
		A(int a) {
			cout << "A value is : " << a << endl;
		}
};
class B : public A{
	public:
		
		B(int a, int b) : A(a) {
			cout << "B value is : " << b << endl;
		}
};


int main() {
	
	B bb(10, 20);

return 0;
}
