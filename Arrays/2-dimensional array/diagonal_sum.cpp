//Digonal sum

#include <iostream>
using namespace std;
int diagonalSum(int mat[][3], int n) {
	int diaSum = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i == j || j == n-i-1) {
				diaSum += mat[i][j];
			}
			
		}
	}
	return diaSum;
}
int main() {
	int mat[3][3] = {{1,2,3},
					 {1,2,3},
					 {1,2,3}};
					 
	int rowCol = 3;	//row = col = 4
	
	cout << diagonalSum(mat, rowCol);

return 0;
}
