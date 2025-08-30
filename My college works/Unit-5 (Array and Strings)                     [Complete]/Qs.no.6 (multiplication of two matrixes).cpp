//Q.No(6):-Write down a C++ program to find the multiplication of two matrices A[3][2] and B[2][3].

#include<iostream>
using namespace std;
int main() {
	int i,j,k;
	int a[3][2];
	int b[2][3];
	int mult[3][3]={0};

// Storing elements of first matrix.
	cout << endl << "Enter elements of matrix 1st(3 by 2):" << endl;
	for(i = 0; i < 3; ++i)  //0,1,2;  for columns of 1nd matrics.
		for(j = 0; j < 2; ++j) {   //0,1 for rows of 1st matrics.
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix 2nd(2 rows, 3 columns):" << endl;
	for(i = 0; i < 2; ++i)
		for(j = 0; j < 3; ++j) {
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

// Multiplying matrix a[3 by 2] and b[2 by 3] and storing in array mult[3][3].
	for(i = 0; i < 3; ++i)                
		for(j = 0; j < 3; ++j)           
			for(k = 0; k < 2; ++k) {
				mult[i][j] += a[i][k] * b[k][j];
				
			/* 
				as i=..3,j=..3 & k=.2, so
				Output Matrics= 3 by 3,
				Matrics 1st = 3 by 2. a[i or j][k].
				Matrics 2nd = 2 by 3. b[j or i][k]. 
				                                    */
			}

	// Displaying the multiplication of two matrix.
	cout << endl << "Multiplication of A[3][2] & b[2][3] are : " << endl;
	for(i = 0; i < 3; ++i)
		for(j = 0; j < 3; ++j) {
			cout << " " << mult[i][j];
			if(j == 3-1)               //3 index - 1 index = 2 index.
				cout << endl;
		}

	return 0;
}
