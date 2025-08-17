/* Pattern - 12 :
	
	1 6 11 16 21
	2 7 12 17 22
	3 8 13 18 23
	4 9 14 19 24
	5 10 15 20 25
	
 */

#include<iostream>
using namespace std;

int main(){

int n; 
int k;

cout << "Enter any number for (rows & col) : " << endl;
cin >> n;

for(int i = 1; i <= n; i++) {
	k = i;
	for(int j = 1; j <= n; j++) {
		cout << k << " ";
		k += n;
						        /*
		k1 = 1
		k2 = 1 + 5 = 6
		k3 = 6 + 5 = 11
		k4 = 11 + 5 = 16
		k5 = 16 + 5 = 21
		
		And then end_line.
								*/
	}
	cout << endl;
}


return 0;
}
