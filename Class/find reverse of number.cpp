// program to reverse a number.(using class)

#include<iostream>
#include<conio.h>
using namespace std;
class reverse {
		int n;
	public:
		void getData();
		void putData();

};
int main() {
	reverse rr;
	rr.getData();
	rr.putData();

	getch();
	return 0;
}

void reverse::getData() {
	cout<<"Enter any number : "<<endl;
	cin>>n;
}
void reverse::putData() {
	int rev = 0;
	while(n>0) {
		rev =(rev*10) + n%10;

		n=n/10;
	}
	cout<<"Reverse:"<<rev;
}