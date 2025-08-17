/* paramid of ALPAHBET:
 a
 a b
 a b c
 a b c
 a b c d
 a b c d e

*/
#include<iostream>
using namespace std;

int main() {

	char n;
	char i,j;

	cout<<"Enter any character for rows : "<<endl;     //you should enter character for row like : e.
	cin>>n;

	/*
	for(i='a'; i<=n; i++){
		for(j='a'; j<=i; j++){
			cout<<j;
		}
	cout<<endl;
	}

	*/

	
	for(i=97; i<=n; i++) {        //97 is the ascii code for small 'a'. & end with 122
		for(j=97; j<=i; j++) {
			cout<<j;
		}
		cout<<endl;
	}

	return 0;
}
