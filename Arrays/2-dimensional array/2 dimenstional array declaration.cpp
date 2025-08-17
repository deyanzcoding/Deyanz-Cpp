// 2-dimenstional array;

#include<iostream>
using namespace std;

int main() {
	int n,m;

	cout<<"Enter row-by-col :"<<endl;
	cin>>n>>m;

	int arr[n][m];

	cout<<"Enter your array elements : "<<endl;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>arr[i][j];
		}
	}

	cout<<"\nYour Matrix becomes : "<<endl;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}