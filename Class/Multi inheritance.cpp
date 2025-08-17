// Multi-inheritence class

#include<iostream>
using namespace std;
class A {

	protected:
		int x;
	public:
	void input() {
			cout<<"Enter 1st number : "<<endl;
			cin>>x;
		}

};

class B {

	protected:
		int y;
	public:
	void getData() {
			cout<<"Enter 2nd number : "<<endl;
			cin>>y;
		}
};

class C: public A, public B {
	public:
		void addition(){
			cout<<"Addition = "<<x+y;
		}

};
int main() {

	C cc;
	cc.input();
	cc.getData();
	cc.x;
	cc.addition();

	return 0;
}
