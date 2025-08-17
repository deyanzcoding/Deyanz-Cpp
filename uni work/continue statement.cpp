//  print 1 - 20 ,    skip 7, 9, 11;

#include<iostream>
using namespace std;

int main() {
		int i;
	for ( i = 1; i <= 20; i++) {
		if (i == 7 || i == 9 || i == 11)
		continue;
	cout << i << " ";
	}
	

	return 0;
}
