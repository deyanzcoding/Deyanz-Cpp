//Qs.no(4): Write a C++ program that takes three numbers as input and displays wheather all numbers are equall or not by using nested if condition.

#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Enter 3 Number : "<<endl;
	cin>>a>>b>>c;

	if(a==b || b==c || c==a) {
		cout<<"All numbers are Same!!";
	} else {

		cout<<"All numbers are not Same!!\a";
	}

	return 0;
}
