

#include<iostream>
using namespace std;

int main() {
	int i;
	int j;

	cout << "Enter the value of i : ";
	while (i >= 0) {
		cin >> i;

		for(j = 1; j <= 10; i++)
			cout << i << "x" << j << "=" << i*j << endl;
			
	}



	return 0;
}
