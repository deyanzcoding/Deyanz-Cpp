// Question(10):- Write an algorithm to traverse an integer array with N elements and find whether ornot the accessed value is a prime number.

#include<iostream>
using namespace std;

int main() {

	int arr[5] = {3,4,5,6,7};
	int pos;
	int count = 0;

	cout<< "Array Elements : "<<endl;
	for(int i=0; i<=4; i++) {
		cout<< arr[i] << " ";
	}

	cout<< "\nEnter any index in array : " << endl;
	cin >> pos;


		for(int i=1; i<=arr[pos]; i++) {
			if(arr[pos]%arr[i] == 0)
				count += 1;
		}

	if(count == 2 )
		cout<< "Prime";
	else
		cout<< "non-prime";


	return 0;
}
