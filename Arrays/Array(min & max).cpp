//To find Minimum & Maximum value in array.

#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cout<<"Enter element(n): "<<endl;
	cin>>n;

	int arr[n];

	cout<<"Enter values: ";
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int maxNo=0;
	int minNo=0;

	for(int j=0; j<n; j++) {
		maxNo = max(maxNo, arr[j]);
		minNo = min(minNo, arr[j]);
	}

	cout<<"Max :"<<maxNo<<endl;
	cout<<"Min :"<<minNo<<endl;

	return 0;
}
