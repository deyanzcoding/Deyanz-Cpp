// Qs.No.11:- Write a C++ program to read ten(10) alphabets of English from the keyboard into a character type array and then sort them in descending order. 

#include<iostream>
using namespace std;
int main() {
	string str[10],temp;
	cout<<"Enter 10 characters : "<<endl;
	for(int i=0; i<10; ++i) {
		getline(cin,str[i]);
	}
	for(int i=0; i<10; ++i)
		for(int j=i+1; j<10; ++j) {
			if(str[i]<str[j]) {
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	cout<<"In Alphabetic Order : "<<endl;
	for(int i=0; i<10; ++i) {
		cout<<str[i]<<endl;
	}

	return 0;
}
