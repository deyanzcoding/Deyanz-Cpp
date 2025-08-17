// finding hcf

#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter any number : ";
	cin >> n;
	cout << endl << n%10 << endl << endl;
	int h;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
		h = i;
	}
			cout << h << endl;


	return 0;
}
