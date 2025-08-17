

#include<iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;

	cout << "Enter the number : ";
	cin >> num;

	while (num >= 0) {
		sum += num;
		cout << "The number is : " << endl;
		cin >> num;
	}

	cout << "The sum is : " << sum << endl;



	return 0;
}
