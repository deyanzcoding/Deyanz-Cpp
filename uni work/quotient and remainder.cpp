//program to find Quotient and remainder

#include<iostream>
using namespace std;

int main() {

	int dividend, divisor;
	char ch;

	do {

		cout << "Enter dividend : " ;
		cin >> dividend;
		cout << "Enter divisor : ";
		cin >> divisor;

		cout << "Quotient = " << dividend / divisor;
		cout << "\nRemainder = " << dividend % divisor;

		cout << "\n\nDo you want again ? (y/n) :";
		cin >> ch;

	} while (ch != 'n');

		return 0;
}
