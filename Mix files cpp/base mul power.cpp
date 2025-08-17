//calculate x^y.    x power(y).
// 2^3=8.

#include<iostream>
using namespace std;

int main() {

	int base,power;
	int prod=1;
	
	cout<<"Enter base number : "<<endl;
	cin >> base;
	cout<<"Enter power number : "<<endl;
	cin >> power;

/*
	int i=1;
	while(i<=power) {
		prod = prod*base;
		i++;
	}
	 
	cout<<base<<"^"<<power<<" = "<<prod<<endl;
*/


for(int i=1; i<=power; i++)
	prod *= base;
	
	cout<<base<<"^"<<power<<" = "<<prod<<endl;

	return 0;
}
