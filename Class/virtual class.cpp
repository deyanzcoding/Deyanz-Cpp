/*  Virtual Base class(Late Binding & early Binding)
	-> virtual is a keyword.
	-> A virtual function is redefine in derived class.
	-> When a virtual funtion is defined in base class, then the
		pointer to base class is created. Now on the basis of
		type of object arrangement the respective class function is
		called.
*/

#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){
			cout<<"i'm in base class" << endl;
		}
};
class B : public A{
	public:
		void show(){
			cout<<"i'm in derived class" << endl;
		}
};

int main(){

A *bptr;     //make pointer of base class(A)
B aa;     // and make object of base class.
bptr = &aa;
bptr -> show();


return 0;
}
