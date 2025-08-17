//Use of destrutor in inheritence

#include <iostream>
using namespace std;

class A {	
	public :
		int x;
		void getData() {
			cout << "X = " ;
			cin >> x;
		}
		
		~A() {
			cout << "Memory Cleaned Successfully [A]" << endl;
		}
};

class B : public A{
	public :
		int y;
		void input() {
			cout << "Y = " ;
			cin >> y;
		}
		
		void output() {
			cout << "Value of X = " << x << endl;
			cout << "Value of Y = " << y << endl;
		}
		
	~B() {
		cout << "Memory Cleaned Successfully [B]" << endl;
	}
};

int main() {
	B obj;
	obj.getData();
	obj.input();
	obj.output();

return 0;
}
