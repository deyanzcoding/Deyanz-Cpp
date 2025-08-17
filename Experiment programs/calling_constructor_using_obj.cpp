// experiment of calling constructor using object

#include <iostream>
using namespace std;

class temp {
	public:
	
//		void temp() {}	//[Error] return type specification for constructor invalid
//		int temp()  {} 	//can't use return-type in constructor
	
	
		temp() {
			cout << "My name is Deyan" << endl;
			int a; float b;
		}
};

int main() {
	
	temp obj;
	cout << "size of class : " << sizeof(temp);
//	obj.temp(); 	we can't call it --[Error] invalid use of 'temp::temp'


return 0;
}
