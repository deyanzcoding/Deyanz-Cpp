/*Simple sort:
3 2 4 1 5 (unsorted_order)   1st loop: i-1 (to remove last element)
1 2 3 4 5 (sorted_order) 	 2nt loop: i+1 (start from 2nd element in array) & (remove 1st element)
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter index(n) : "<<endl;
	cin>>n;

	int arr[n];

	cout<<"Enter arr elements : "<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

for(int i=0; i<n; i++){
	cout<<arr[i]<<" ";
}cout<<endl;
	return 0;
}
