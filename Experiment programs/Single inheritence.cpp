// single inheritence

#include<iostream>
using namespace std;
class A {
//	private:   if we want to use private data_members so we should create function to access elements of private.(below in public)
//		int x;
	
	protected:
		int x;

	public:
		void input() {
			cout<<"\nEnter 1st number : "<<endl;
			cin>>x;
		}
//		int getx(){      Accesser function
//			return x;
//		}
};

class B : public A {    // here B is base class & A is derived class.
		int y;
	public:
		void getData() {
			cout<<"\nEnter 2nd number : "<<endl;
			cin>>y;
		}

		void putData() {
			cout<<"Addition = "<<x+y;
//			cout<<"Addition = "<<getx() + y;
		}
};
int main() {

	B aa;
	
	aa.input();
	aa.getData();
	aa.putData();

	return 0;
}
