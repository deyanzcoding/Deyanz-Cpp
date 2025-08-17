/*
pattern :

* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter number of rows : ";
	cin >> n;

	for (int i = 0; i <= n-1; i++) {
		for(int j = 1; j <= n-i; j++) {
			cout << "* " ;
		}
		cout << endl;
	}


	return 0;
}
