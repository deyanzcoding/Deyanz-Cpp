// Transpose of matrix given from users.

#include<iostream>
using namespace std;

int main() {
	int row,col;

	cout<<"Enter row & col for matrix : "<<endl;
	cin>>row>>col;

	int mat[row][col];

	cout<<"Enter elements : "<<endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin>>mat[i][j];
		}
	}

		for(int i=0; i<row; i++) {
			for(int j=i; j<col; j++) {

				int temp = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = temp;
			}
		}
	
	cout<<"After Transpose : "<<endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
