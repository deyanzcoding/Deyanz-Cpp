//check positive , Negetive or zero.

#include<iostream>
using namespace std;

class PNZ {
	private:
		int a;
	public:
		void getData();
		void putData();
};

void PNZ :: getData() {
	cout<<"Enter Any Number : ";
	cin>>a;
}
void PNZ :: putData() {
	if(a>0) {
		cout<<"\nPositive"<<endl;
	} else if (a<0) {
		cout<<"Negitive\a";
	}
	else
	{
		cout<<"Zero";
	}
};
int main() {
	PNZ oo;
	oo.getData();
	oo.putData();

	return 0;
}
