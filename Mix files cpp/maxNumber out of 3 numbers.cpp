//Program to check maximum number out of 3 numbers.

#include<iostream>
using namespace std;
int main() {

	int a,b,c;
	int max;

	cout<<"Enter 3 numbers : "<<endl;
	cin>>a>>b>>c;

/* first of all check either (1st num > 2nd num) 'if yes' then check either (1st num > 3rd num) .. 'if yes' then print 1st number is maximum.Otherwise 3rd number
maximum.              but if (1st num != 2nd num)         then check either (2nd num > 3rd num) .. 'if yes' then print 2nd number is maximum.Otherwise 3rd number
maximum.    */

	if(a>b) {  //  check (1st number >  2nd number)

		if(a>c) {
			cout<<"Maximum number is : "<<a;
		}
		else {    // if not then print 3rd number is maximum.
			cout<<"Maximum number is : "<<c;
		}
	} else {
		if(b>c)
			cout<<"Maximum number is : "<<b;
		else {
			cout<<"Maximum number is : "<<c;
		}
	}

	return 0;
}
