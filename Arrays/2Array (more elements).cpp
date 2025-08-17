// to access more than 1 array & assighn value to them.

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter element (n): "<<endl;
cin>>n;

//to declare array of number(n).
int arr[n];

//this loop take input for arr[n].
cout<<"Enter values  : ";
for(int i=0; i<n; i++){
	cin >> arr[i];
}

//this loop give input for arr[n].
cout<<"You Entered : ";
for(int i=0; i<n; i++){
	cout << arr[i]<<" ";
}

	return 0;
}
