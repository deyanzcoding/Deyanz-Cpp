/* paramid :
 				   *
 		         * * *
 			   * * * * *
 			 * * * * * * *
 	       * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main() {

	int n;
	int i,j,k;
	cout<<"Enter any number of row : "<<endl;
	cin>>n;

	/*
		for(int i=1; i<=n; i++) {   // rows
			for(int j=1; j<=n-i; j++)  //blank_spaces
				cout<<" ";

			for(int k=1; k<= 2*i-1; k++) // stars
				cout<<"*";

			cout<<endl;
		}
	*/

	i=1;
	while(i<=n) {
		j=1;
		while(j<=n-i) {
			cout<<" ";
		j++;
		}
		k=1;
		while(k<=2*i-1){
			cout<<"*";
		k++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}
