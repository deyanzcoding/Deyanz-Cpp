// program to print factors of a number

#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter any number : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		if(n%i == 0)
			cout << i << " " << endl;

	return 0;
}
