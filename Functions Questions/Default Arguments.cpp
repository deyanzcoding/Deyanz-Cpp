// Default Functions..

#include<iostream>
using namespace std;

void add(int a=10, int b=12);   //function prototype;
int main() {

	add();
	return 0;
}

void add(int a,int b) {
	int sum;
	cout<<"Addition = "<<a+b;
}