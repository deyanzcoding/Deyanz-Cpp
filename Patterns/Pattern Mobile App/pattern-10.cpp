/*pattern 10 : 
	1 1 2 1 3 1
	1 2 2 2 3 2
	1 3 2 3 3 3
	1 4 2 4 3 4
*/

#include<iostream>
using namespace std;

int main(){


for(int i = 1; i <= 4; i++) {
	for(int j = 1; j <= 3; j++) {
		cout << j << " " << i << " ";
	}
	cout << endl;
}


return 0;
}
