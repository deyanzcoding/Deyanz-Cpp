// Can we create class inside another class??

#include <iostream>
using namespace std;

class outer {

	public:
		class inner {
			public:
				void innerDisplay() {
					cout << "cout inside inner class";
				}
		};

//	cout << "cout inside outer class"; 			--> [Error] 'cout' does not name a type
		void outerDisplay() {
			cout << "cout inside outer class";
		}
		
		inner obj_inner;
		obj_inner.innerDisplay();
};

int main() {

	outer obj_outer;
	obj_outer.outerDisplay();
	
	
	
	return 0;
}
