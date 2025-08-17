//Selection sorting..

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter any number : "<<endl;
cin>>n;

int arr[n];

cout<<"Enter arr elements:"<<endl;
for(int i=0; i<n; i++){
	cin>>arr[i];
}

for(int i=0; i<n-1; i++){
	for(int j=i+1; j<n; j++){
		if(arr[j]<arr[i]){
			int temp = arr[j];     //because to not change values of arr[j]
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
}
cout<<"After sorting array becomes : "<<endl;
for(int k=0; k<n; k++){
	cout<<arr[k]<<" ";
}
	return 0;
}
