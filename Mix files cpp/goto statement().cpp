//goto statement
// use to give permission push farward to specific name.
// like . |goto even|

#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter any number : "<<endl;
	cin>> n;

	if(n%2 == 0)
		goto even;
	else
		goto odd;               
		
//definition of even & odd
	even:
		cout<<"Even";
		return 0;
	odd:
		cout<<"Odd";
		return 0;
		 

	return 0;
}
