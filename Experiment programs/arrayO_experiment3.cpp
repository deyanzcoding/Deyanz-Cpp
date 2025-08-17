//array experiment

#include<iostream>
using namespace std;

int main(){

//int arr[] = {9,10};  // it will base on value in curly braces.
int arr[2] = {9,10}; 

cout<< "arr[0] : " << arr[0] << endl;
cout<< "arr[1] : " << arr[1] << endl;

//if i use out of rang index then all element(value) well be assigned to 0.
cout<< "arr[2] : " << arr[2] << endl;
cout<< "arr[3] : " << arr[3] << endl;
cout << sizeof(arr);

for(int i=0; i<=1; i++) {
	cout<< "\nEnter value for arr["<<i<<"] = ";
	cin >> arr[i];
}

return 0;
}
