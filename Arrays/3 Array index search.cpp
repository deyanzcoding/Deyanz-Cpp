// search index of specific element in array:

#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int key) {
	for(int i=0; i<n; i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	cout<<"Enter number (n) : "<<endl;
	cin>>n;

	int arr[n];

	cout<<"Enter array values :"<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int key;
	cout<<"Enter key : "<<endl;     // value of arr to find index.
	cin>>key;

	cout<<linearSearch(arr, n, key);


	return 0;
}
