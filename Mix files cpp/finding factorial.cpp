//finding factorial in (for & while loop)

#include<iostream>
using namespace std;

int main() {

	int n;
	int fact=1;

	cout<<"Enter any number : "<<endl;
	cin>>n;
 
 	while(n>=1){    // n= 5,4,3,2,1
 		fact*=n;
		n--;     // n=n-1;
	 }
	cout<<"\nFactorial : "<<fact;



/*
	cout<<"Enter any number for Factorial : "<<endl;
	cin>>n;

	for(int i=1; i<=n; i++) {
		fact *= i;
	}
	cout<<"Factorial = "<<fact;
*/
	return 0;
}
