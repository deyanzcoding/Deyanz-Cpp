// odd & even in class.

#include<iostream>
using namespace std;

class oddEven {
	private:
		int a;
	public:
		void getData();
		void putData();
};

void oddEven :: getData() {
	cout<<"Enter Any Number : ";
	cin>>a;
}
void oddEven :: putData() {
	if(a%2==0) {
		cout<<"\Even"<<endl;
	} else {
		cout<<"Odd\a";
	}
};
int main() {
	oddEven oo;
	oo.getData();
	oo.putData();

	return 0;
}
