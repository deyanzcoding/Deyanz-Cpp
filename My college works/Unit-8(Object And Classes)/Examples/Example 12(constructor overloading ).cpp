//constructor overloading.

#include<iostream>
using namespace std;

class cRectangle {
		int width,length;
	public:
		cRectangle () {
			width=5;
			length=15;
		}
		cRectangle(int a,int b) {
			width=a;
			length=b;
		}
		int area() {
			return (width*length);
		}
};

int main() {
	cRectangle cR1;
	cRectangle cR2(5,4);

	cout<<"Area of first rectangle :"<<cR1.area()<<endl;     //first rectangle w=5,l=15;  =>75.
	cout<<"Area of second rectangle :"<<cR2.area()<<endl;   //second rectangle w=5, l=4;  =>20.

	return 0;
}
