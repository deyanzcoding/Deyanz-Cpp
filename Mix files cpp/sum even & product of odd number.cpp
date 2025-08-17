// find sum of even & product of odd digits of a given number 
// e.g : 1 2 3 4 5 
// here 2+4=6, 1*3*5=15;
#include<iostream>
using namespace std;

int main(){
int n;
int sum=0,prod=1;
int digit;

cout<<"Enter any number : "<<endl;
cin>>n;

while(n>0){
	digit = n%10;
	if(digit%2 == 0){
		sum = sum + digit;
		n = n/10;
	}else{
		prod = prod * digit;
		n = n/10;
	}
}

cout<<"Sum of even digits : "<<sum<<endl;
cout<<"Product of odd digits : "<<prod<<endl;




	return 0;
}
