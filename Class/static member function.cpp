//static member function

#include<iostream>
using namespace std;
class demo {
	private:
		int x,y;
		static int z;

	public:
		void getData() {
			cout<<"Enter 2 numbers : ";
			cin>>x>>y;
			z++;
		}
		void putData() {
			cout<<"X : "<<x<<endl;
			cout<<"Y : "<<y<<endl;
			cout<<"Static Z : "<<z<<endl;
		}
		static void print() {
			cout<<"Static Variable z: "<<z;
		}


};
int demo :: z;
int main() {

	demo aa,bb;
	aa.getData();
	bb.getData();
	aa.putData();
	aa.putData();
	
	cout<<"Static function called : "<<endl;
	demo::print();


	return 0;
}
