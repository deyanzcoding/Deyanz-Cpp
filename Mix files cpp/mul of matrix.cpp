// multiplication of matrix..

#include<iostream>
using namespace std;

int main() {
	int n1,n2,n3;

	cout<<"Enter row & col : "<<endl;
	cin>>n1>>n2>>n3;

//decleration of 2 matrix..
	int m1[n1][n2];
	int m2[n2][n3];

//initialize 1st matrix..
	cout<<"Enter elements for 1st matrix : "<<endl;
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n2; j++) {
			cin>>m1[i][j];
		}
	}

//initialize 2nd matrix..
	cout<<"Enter elements for 2st matrix : "<<endl;
	for(int i=0; i<n2; i++) {
		for(int j=0; j<n3; j++) {
			cin>>m2[i][j];
		}
	}

//declare output(answer) matrix..
	int output[n1][n3];

//to give zero for all elements of output matrix.
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n3; j++) {
			output[i][j] = 0;
		}
	}


	for(int i=0; i<n1; i++) {
		for(int j=0; j<n3; j++) {
			for(int k=0; k<n2; k++) {
				output[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	cout<<"Matrix after multiplication : "<<endl;
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n3; j++) {
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
