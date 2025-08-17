/* Function Overriding in classes :
		"suppose we have two classes and make function on them with same name then,
		the function at calling time always be derived class not base class,
		so this concept is called function/method overriding."

*/
#include<iostream>
using namespace std;
class A {

	public:
		void display() {
			cout<<"Base Class"<<endl;
		}
};

class B : public A {
	public:
		void display() {
			cout<<"Derived Class"<<endl;
			A :: display();
			// use of above statment we can call base class display function.
		}

};
int main() {

	B bb;
//	bb.display();  //override display() of class A. if same name function.
	
	bb.A::display();   //this statment well call display function directly using class B object.
	bb.display();

	return 0;
}
