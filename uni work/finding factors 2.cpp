/* finding factors of given number 2
Factors of 24 =
	1x24
	2x12
	3x8
	4x6
	6x4
	8x3
	12x2
	24x1

*/
#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter any number : " ;
	cin >> n;


	for(int i = 1; i <= n; i++)      // from start 2 end
		for(int j = n; j >= 1; j--)		// from end 2 start
			if (i*j == n)
				cout << i << "x" << j << endl;

	return 0;
}
