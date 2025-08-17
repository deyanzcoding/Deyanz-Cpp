/* Bubble Sorting:
				  "In bubble sorting we compare respectively two elements with each other through this condition [(1st ele < 2nd ele) = True]".
1 2 6 9 3   
1 2 3 6 9

*/
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter index(n) : "<<endl;
cin>>n;

int arr[n];

cout<<"Enter elements : "<<endl;
for(int i=0; i<n; i++){
	cin>>arr[i];
}

int counter=1;
while(counter<n){
	for(int i=0; i<n-counter; i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	counter++;
}

cout<<"After sorting(accending order) : "<<endl;
for(int i=0; i<n; i++){
	cout<<arr[i]<<" ";
}
	return 0;
}
