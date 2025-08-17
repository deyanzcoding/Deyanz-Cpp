#include <iostream>
using namespace std;
class cls{
	public: 
	int a, b;
cls() {
	cout << "Enter 1st number :: " << endl;
	cin >> a;
	cout << "Enter 2nd number :: " << endl;
	cin >> b;
}
cls(int) {
	
}

void display() {
	cout << "a="<< a << endl;
	cout << "b="<< b << endl;
}
	
};

class cls2{
	public: 
	int a, b, c;
cls2() {
	cout << "Enter 1st number :: " << endl;
	cin >> a;
	cout << "Enter 2nd number :: " << endl;
	cin >> b;
	cout << "Enter 3rd number :: " << endl;
	cin >> c;

}

void display() {
	cout << "a="<< a << endl;
	cout << "b="<< b << endl;
	cout << "c="<< c << endl;
}
	
};
int main() {
cls obj1;
obj1.display();

cls2 obj2;
obj2.display();

obj2 = obj1;	//error why??	
/*==> Becuasue copy constructor have 1 (shartt) that it well copy 2 objects of same class.
 and here obj2 and obj1 are the diff classes.*/
obj2.display();

return 0;
}
