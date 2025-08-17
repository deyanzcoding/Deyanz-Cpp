/*Ambugyuty Resolution in Inheritence:
	"Same function in inheriting classes --> solution"
	like below : input() in A, B, C;

 	if we make multiple inheritence  like :: class C: pulbic A,public B


*/
#include<iostream>
using namespace std;

class A {
	protected:
		int a;
	public:
		void input() {
			cout<<"Enter value of a : ";
			cin >> a;
		}
		void outputa() {
			cout<<"a= "<< a << endl;
		}
};

class B {
	protected:
		int b;
	public:
		void input() {
			cout<<"Enter value of b : ";
			cin >> b;
		}
		void outputb() {
			cout<<"b= " << b << endl;
		}
};

class C : public A, public B {
		int c;
	public:
		void input() {
			cout<<"\nEnter value of c : ";
			cin >> c;

			 //B::input();
			// A::input();      // one way is that class_name::function_of_class decleration.
			//second we can decleare below in main() function.
		}
		void outputc() {
			cout<<"c= "<< c << endl;
		}
};

int main() {

	C cc;
//	1st method;
	 cc.A::input();     //object of C  . class_name :: function in class();
	 cc.outputa();

	 cc.B::input();
	 cc.outputb();

	 cc.C::input();
	 cc.outputc();


/*
2nd method:
	cc.input();
	cc.outputc();
	cc.outputb();
	cc.outputa();
*/

	return 0;
}
