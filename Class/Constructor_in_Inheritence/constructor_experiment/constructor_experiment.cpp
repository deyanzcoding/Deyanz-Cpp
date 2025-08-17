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
		B(int b, int c) : A(c){
			cout << "B = " << b << endl;
//			cout << "C = " << c << endl;		we can use others class perameter
		}
};


int main() {
	
	B bb(10, 20);

return 0;
}
