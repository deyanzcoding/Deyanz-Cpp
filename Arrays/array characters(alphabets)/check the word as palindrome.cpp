// check:: Is the word is palindrome or not?
// palindrome is the word which is equal from (start to end) or (end to start)
// e.g :- (Nitin -> nitiN),    (race car -> race car) 

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter word length : "<<endl;
cin>>n;

char arr[n+1];
cin >> arr;

bool flag = 1;

for(int i=0; i<n; i++){
	if(arr[i] == arr[n-1-i]){
		cout<<"Palindrome";
	}else{
		cout<<"Not Palindrome!!\a";
	}
		break;
}
	

/*
for(int i=0; i<n; i++){
	if(arr[i] != arr[n-1-i]){
		flag = 0;
		break;
	}	
}

if(flag == true){
	cout<<"word as a palindrome..";
}else{
	cout<<"word as not a palindrome..";
}

*/
	return 0;
}
