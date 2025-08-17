//check palindrome

#include<iostream>
using namespace std;

int main() {

	int n;
	int orig;
	int rev = 0;

	cout<<"Enter any number : "<<endl;
	cin >> n;
	orig = n;

	for (; n>0; n/10) {
		rev = (rev * 10)+ n%10;
		n = n/10;
	}

	if ( orig == rev) {
		cout<<"Palindrome"<<endl;
	} 
	else {
		cout<<"Not Palindrome\a";
	}


	return 0;
}
