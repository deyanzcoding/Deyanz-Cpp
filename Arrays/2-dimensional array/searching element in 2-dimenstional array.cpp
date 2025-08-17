// searching element in 2-dimenstional array;

#include<iostream>
using namespace std;

int main(){
int n,m;

cout<<"Enter row,col for matrix : "<<endl;
cin>>n>>m;

int arr[n][m];

// Accessing index & take value to them..
cout<<"Enter elements for Matrix : "<<endl;
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cin>>arr[i][j];
	}
}

// Printing the given array..
cout<<"Matrix becomes : "<<endl;
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

//searching specific element in array..
int x;
cout<<"Enter element which you want to search : "<<endl;
cin>>x;

bool flag=false;   

for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		if(arr[i][j]==x){
			cout<<"a"<<i<<j;
			flag = true; 
		}
	}
	cout<<endl;
}

if(flag){  // if the above 'if' is execute then flag well becomes true and this 'if' will execute.
	cout<<"Given element is found!!";
}else{
	cout<<"Given element is not found!!\a";
}
	return 0;
}
