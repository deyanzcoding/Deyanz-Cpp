/*  paramid flep:
               a
             a b
           a b c
         a b c d
       a b c d e


 */

#include<iostream>
using namespace std;

int main() {

	char n;
//here i=row, j=blank_space, k=characters
	char i,j,k;

	cout<<"Enter any character : "<<endl;
	cin>>n;

	for(i='a'; i<=n; i++) {
		for(j='a'; j<=n-i; j++) {
			cout<<" ";
		}
		for(k='a'; k<=i; k++) {
			cout<<k;
		}
		cout<<endl;
	}


	return 0;
}
