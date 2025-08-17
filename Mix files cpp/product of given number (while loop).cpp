//product of given number 

#include<iostream>
using namespace std;

int main(){
int n,prod=1;
cout<<"Enter any number : "<<endl;
cin>>n;

while (n>0){  //for 82
	int digit = n%10;
	prod = prod * digit;  //2,16
	n = n/10;  //8,0
}
cout<<"Product of given number : "<<prod; //=16

	return 0;
}
