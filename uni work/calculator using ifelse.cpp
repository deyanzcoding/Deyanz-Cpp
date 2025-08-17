//calculator using if else

#include<iostream>
using namespace std;

int main() {

	int n1, n2;
	char op;

	cout << "Enter 1st number : ";
	cin >> n1;
	cout << "\nEnter operator : ";
	cin >> op;
	cout << "\nEnter 2nd number : ";
	cin >> n2;

	if (op == '+')	cout << n1 + n2 ;
	if (op == '-')  cout << n1 - n2 ;
	if (op == '/')  cout << (float)n1 / (float)n2 ;
	if (op == '*')	cout << n1 * n2 ;

	return 0;
}
