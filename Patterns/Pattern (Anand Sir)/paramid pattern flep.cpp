/*
paramid pattern:
* * * * *
* * * *
* * *
* *
*


*/

#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter no of Rows : ";
cin >> n;

for (int i = 0; i <= n; i++) {
	for (int j = 1; j <= n-i; j++) {
		cout << "* ";
	}
	cout << endl;
}


return 0;
}
