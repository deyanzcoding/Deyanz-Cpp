// Program to check either the input number is prime or composite.

/* divisor will be 2 because
	1) Prime number     ==> A number will be prime if it divided by 2 and its reminder is not equal to 0.  (A number which can divide only itself and 1).
	e.g:- 7 / 2 = 1(reminder). so it is prime because reminder is not equal to 0.

	2) Composite number ==> A number will be composite if it divided by 2 and its reminder is equal to 0.  (A number which can divide by itself and 1 and more numbers).
	e.g:- 8 / 2 = 0(reminder). so it is composite because reminder is equal to 0.
*/

#include<iostream>
using namespace std;
int main() {

	int num;
	int div = 2;        //div = divisor & 1st prime number start from 2

	cout<<"Enter any number : "<<endl;
	cin>>num;


	while(num > div) {   
		if(num % div == 0) {
			cout<<"Composite";
			break;
		}

		else {
			div = div + 1;
			cout<<"Prime";
		} 

		break;
	}


	return 0;
}
