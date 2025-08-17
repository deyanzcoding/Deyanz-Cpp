// program to demonstrat static variable and function 

#include <iostream>
using namespace std;

class B {
	public:
		static int a;
		B() {
			// do nothing
		}
		
};

int B :: a = 10;

int main() {
//class B
B bb;

cout << bb.a << endl;
bb.a++;

cout << bb.a << endl;



//bb.a = 10;
//cc.a = 20;
//
//cout << bb.a << endl;
//cout << cc.a << endl;

return 0;
}