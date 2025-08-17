// oddEven using class

#include<iostream>
using namespace std;

class oddEven{
	private:
		int num;
	public:
		void getData();
		void putData();
};

int main(){
	oddEven oo;

	oo.getData();
	oo.putData();

	return 0;
}

void oddEven::getData(){
	cout<<"Enter any number : "<<endl;
	cin>>num;
}

void oddEven::putData(){
	if(num%2 == 0){
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
}
