// linear search in 2d array
// home_work : returns it's idx if found (0, 2) else (-1, -1)

#include <iostream>
using namespace std;
//
//bool linearSearch(int mat[][3], int rows, int cols, int key) {
//	for(int i=0; i<rows; i++) {
//		for(int j=0; j<cols; j++) {
//			if(mat[i][j] == key)
//				return true;
//		}
//	}
//
//return false;
//}

//homework -> to return index as pair
pair<int, int> linearSearch(int mat[][3], int rows, int cols, int key) {
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			if(mat[i][j] == key)
				return {i,j};
		}
	}

	return {-1, -1};
}
int main() {
	int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int rows=3, cols=3;
//	cout << linearSearch(mat, rows, cols, 9);

//to return location of 'key' (a,b)
	int i = linearSearch(mat, rows, cols, 9).first;
	int j = linearSearch(mat, rows, cols, 9).second;
	cout << "(" << 
	i << "," << j << ")";


	return 0;
}
