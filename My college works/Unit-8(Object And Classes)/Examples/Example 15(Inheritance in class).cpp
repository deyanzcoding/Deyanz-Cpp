// Inheritance in class

#include<iostream>
using namespace std;
class A {
	public:
		void showA() {
			cout<<"I AM PARENT CLASS(FUNCTION).";
		}
};
class B{

	public:
		void showB() {
			cout<<"I AM CHILD CLASS(FUNCTION).";
		}
};
class N {
	public :
		void showN() {
			cout<<"i am also child class 2(function).";
		}
};
class C : public A,public B,public N {
	public :
		void showC() {
			cout<<"i am also child class(function).";
		}
};
int main() {
	C aa;   //creation of class B(child class which have abilities of parent class);
	aa.showA();
	cout<<endl;
	aa.showB();
	cout<<endl;
	aa.showC();
	cout<<endl;
	aa.showN();
	return 0;
}
