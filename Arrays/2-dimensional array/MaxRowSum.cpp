//max row sum (maximun sum of all rows in an matrix)

#include <iostream>
using namespace std;
//max row
int getMaxRow(int mat[][3], int rows, int cols) {
	int maxRow = INT_MIN;
	
	for(int i=0; i<rows; i++) {
		int rowSumI = 0;
		for(int j=0; j<cols; j++) {
			rowSumI += mat[i][j];
		}
		
		maxRow = max(maxRow, rowSumI);
	}
	return maxRow;
}
// max col
int getMaxCol(int mat[][3], int rows, int cols) {
	int maxCol = INT_MIN;
	
	for(int i=0; i<rows; i++) {
		int colSumI = 0;
		for(int j=0; j<cols; j++) {
			colSumI += mat[j][i];
		}
		
		maxCol = max(maxCol, colSumI);
	}
	return maxCol;
}

int main() {
	int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	cout << getMaxRow(mat, 3, 3) << endl;
	cout << getMaxCol(mat, 3, 3);

return 0;
}
