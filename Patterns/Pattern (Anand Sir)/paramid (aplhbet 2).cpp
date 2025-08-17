/*  paramid alphabiet:

a
b b
c c c
d d d d
e e e e e

*/

#include<iostream>
using namespace std;

int main() {

	char n;
	char i,j;

	cout<<"Enter any character for rows : "<<endl;
	cin>> n;

	for(i='a'; i<=n; i++) {
		for(j='a'; j<=i; j++) {
			cout<<i;
		}
		cout<<endl;
	}



	return 0;
}
