// Question :- Write a c++ program to input the value into a table and print these values on computer screen in tabular form.

#include<iomanip>
#include<iostream>
using namespace std;
class tabularForm {
	private:
		int abc[2][3];

	public:
		// assigning value from main() function
		void assign(int p[2][3]) {
			for(int i=0; i<=1; i++) {
				for(int j=0; j<=2; j++) {
					abc[i][j] = p[i][j];
				}
			}
		}

		//in tabular form:
		void tab() {
			for(int i=0; i<=1; i++) {
				for(int j=0; j<=2; j++) {
					cout<< setw(10) << abc[i][j];
				}
				cout<<endl;
			}
		}

		//print the form:
		void print() {
			for(int i=0; i<=1; i++) {
				for(int j=0; j<=2; j++) {
					cout<< abc[i][j];
				}
			}
			cout<<endl;
		}

};

int main() {
	int arr[2][3] = {1, 2, 3, 4, 5};
	tabularForm tt;
	tt.assign(arr);

	cout<< "Before Tabular form : " << endl;
	tt.print();

	cout<< "After Tabular form : " << endl;
	tt.tab();

	return 0;
}
