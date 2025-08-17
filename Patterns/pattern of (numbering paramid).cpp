/*paramid of:
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5 */

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number : "<<endl;
cin>>n;

for(int i=1; i<=n; i++){   // this loop will run upto 'n' means that n is number of rows in paramid
	for(int j=1; j<=i; j++){  // this loop depend on 1st loop if first row then it run just one time,second row 2 times & so on...
		cout<<i<<" ";
	}
	cout<<endl;  // endline after each row.
}



	return 0;
}
