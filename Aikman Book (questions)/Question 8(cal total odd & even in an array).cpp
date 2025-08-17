// To calculate odd & even in an array.

#include<iostream>
using namespace std;

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int evenC = 0;
	int oddC = 0;

	for(int i=0; i<=4; i++) {
		if(arr[i]%2 == 0) {
			evenC += 1;
		} else {
			oddC += 1;
		}
	}

	cout<< "Total Even = " << evenC;
	cout<< "\nTotal odd = " << oddC;


	return 0;
}
