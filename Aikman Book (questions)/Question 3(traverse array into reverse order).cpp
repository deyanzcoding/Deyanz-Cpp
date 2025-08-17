// Question (3):-  Write an algorithm and program in c++ to traverse an array in reverse order?

#include<iostream>
using namespace std;
class reverse {
	private:
		int abc[5];

	public:
		void access(int p[]) {
			for(int i=0; i<=4; i++) {
				abc[i] = p[i];
			}
		}

		void traverse() {
			
			for(int i=4; i >= 0; i--) {
				cout << abc[i] << " ";
			}
		}

		void print() {
			for(int i=0; i<=4; i++) {
				cout << abc[i] << " ";
			}
		}

};
int main() {
	int arr[5] = {1,2,3,4,5};

//creation of object:
	reverse rr;
	rr.access(arr);

//Before traverse into reverse:
	cout<< "Before traverse array look like : " << endl;
	rr.print();


//After traverse into reverse & also print it:
	cout<< "\nAfter traverse array becomes : " << endl;
	rr.traverse();

	return 0;
}
