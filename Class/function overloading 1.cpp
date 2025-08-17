//all constructor in one program ( constructor overloading )

#include<iostream>
using namespace std;
class demo {
	private:
		int x;
	public:
		demo() {
			x=10;
		}
		demo(int a) {
			x=a;
		}
		demo(int &z) {
			x = x*z;
		}
		void putData() {
			cout<<"x = "<<x<<"\n";
		}
};
int main() {

	demo aa;
	aa.putData();

	demo bb(4);
	bb.putData();

	demo cc(aa);    //to copy values of aa object & paste into cc object.
	cc.putData();

	return 0;
}
