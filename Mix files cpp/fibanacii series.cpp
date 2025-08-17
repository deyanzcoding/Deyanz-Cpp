// fibonacci series upto a given number.

// e.g:- 10 ==> 1 1 2 3 5 8
#include<iostream>
using namespace std;

int main() {

	int n;
	int x,y,z;

	cout<<"Enter Max term : "<<endl;
	cin>>n;

	x=0;
	y=1;
	z=0;

	cout<<"Fibonacci Series : "<<endl;
	while(z<=n) {
	
		x=y;
		y=z;
		z=x+y;
	cout<<"\n"<<z;
	}

	return 0;
}
