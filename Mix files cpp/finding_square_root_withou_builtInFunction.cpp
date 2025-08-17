// program to find square-root of a given number without built-in-function or Calculator.

#include<iostream>
using namespace std;
int main () {

	int n;
	cout << "Enter any number to find square-root : " << endl;
	cin >> n;

	int i, j;
		
	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {
			if (i == j && i*j == n) {
					cout << "Square-Root of " << n << " = " << i << endl;
					break;
			}
		}
	}


	return 0;
}