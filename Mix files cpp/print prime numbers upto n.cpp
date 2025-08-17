// print all prime numbers upto 'n'

#include<iostream>
using namespace std;

int main() {
	int n;     //upto
	int counter = 0;
	cout<< "Enter any index : " << endl;
	cin >> n;

	for ( int i = 1; i<=n; i++ ) {
		for(int j=1; j<=i; j++ ) {
			if(i%j == 0) {
				counter += 1;
			}
		}
	}
 
  

	return 0;
}
