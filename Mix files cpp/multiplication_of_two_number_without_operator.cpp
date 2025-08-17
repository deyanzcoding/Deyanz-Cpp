// program to mul two numbers withou * operator
#include <iostream> 
using namespace std; 	
int multiply(int, int);

int main() {
	int x, y;
	cout << "Enter two numbers to multiply : " << endl;
	cin >> x >> y;
	
	cout << "Multiplication is " << multiply(x,y);

	return 0;
}

int multiply(int n1, int n2) {
	int i;
	int mul = 0;
	if (n2 > 0) {
		n2 = n2 - n2;
		n1 = n1 - n1;
	}
	for (i = 1; i <= n2; i++) {
		mul = mul+n1;
	}
	
	return mul;
}