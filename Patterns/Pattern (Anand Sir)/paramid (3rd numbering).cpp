/*  paramid sequence:
			2
		  3 4
		4 5 6 
	  5 6 7 8
	6 7 8 9 10

 */

#include<iostream>
using namespace std;

int main(){

int n;
int i,j,k;

cout << "Enter any number : " << endl;
cin >> n;

for(i=1; i<=n; i++){
	for(j=1; j<=n-i; j++){
		cout<<" ";
	}
	for(k=1; k<=i; k++){
		cout<<i+k;
	}
	cout<<endl;
}



return 0;
}
