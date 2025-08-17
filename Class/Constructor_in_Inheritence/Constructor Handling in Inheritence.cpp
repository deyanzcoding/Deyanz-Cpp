/* constructor handling in inheritence
	"For this we should create simply constructors in some classes,
	then that classes inherite from one derived class (C). And derived class should
	have there constructor (must) then pass variables on them (how many classes 3 classes so C(int x,int y, int z)) then mention that
	which variable is for which class.
	e.g:
	class A{ };
	class B{ };
	class C : public A, public B{
		C(int x, int y, int z) : A(y),B(z){
             ......
       	}
	};

*/
#include<iostream>
using namespace std;
class A {
	protected:
		int a;
	public:
		A(int x) {
			a = x;
		}
		void display() {
			cout<<"value of a : " << a << endl;
		}
};
class B {
	protected:
		int b;
	public:
		B(int y) {
			b=y;
		}
		void putdata() {
			cout<<"value of b : " << b <<endl;
		}
};
class C : public A, public B {
		int c;
	public:
		C(int p, int q, int r) : A(p), B(q) { // to put p to class A constructor, q to class B contructor.
			c = r;
		}
		void show() {
			cout<<"valude of c : " << c << endl;
		}
};
int main() {

	C cc(10, 20, 30);
	cc.display();
	cc.putdata();
	cc.show();




	return 0;
}
