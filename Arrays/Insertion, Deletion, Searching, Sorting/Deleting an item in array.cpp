// Deleting item from a specified location.

#include<iostream>
using namespace std;

class temp {
	private:
		int abc[5];
	public:

		// assigning value to array from main() function.
		void assign(int p[]) {
			for (int i=0; i<=4; i++) {
				abc[i] = p[i];
			}
		}

		// delete the item ( value )
		void del ( int loc ) {
			for(int i=loc; i<=4; i++) {
				abc[i] = abc[i+1];
				abc[5] = 0;
			}
		}

		//print the array
		void print() {
			for(int i=0; i<=4; i++) {
				cout<< abc[i] << " ";
			}
		}

};
int main() {

	int pos;
	int arr[5] = {11,22,33,44,55};

	temp tt;
	tt.assign(arr);

	cout<< "Value before deletion : " << endl;
	tt.print();

	cout<< "\nEnter position to delete : ";
	cin >> pos;
	
	if(pos > 5){
		cout << "Invalid position !!\a" << endl;
	}else{
	tt.del(pos - 1);
	cout << "\nAfter Deletion : " << endl;
	tt.print();

	}
	return 0;
}
