/* Bubble sorting:-
	"A sorting technique to sort array into accending/decending order to side maximum/minimum number into right side."
	4 2 9 0 8 4
	2 4 9 0 8 4
	2 4 0 9 8 4
	2 4 0 8 9 4
	2 4 0 8 4 9
	2 0 4 8 4 9
	2 0 4 4 8 9
	0 2 4 4 8 9

	sorted array :
	0 2 4 4 8 9
*/
#include<iostream>
using namespace std;

int main() {

	int arr[10];
	int i, j, temp;

	cout << "Enter array : " << endl;
	for(i = 0; i < 10; i++ )
		cin >> arr[i];

//Algo for bubble sorting
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9-i; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

//printing finall array
	cout << "Updated array : " << endl;
	for(i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}
