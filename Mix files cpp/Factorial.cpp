// Factorial upto n.
// e.g: 3! = 3x2x1 = 6
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number : ";
cin>>n;

	int fact=1;
for(int i=2; i<=n; i++){
	fact = fact * i;
}

cout<<"Factorial of "<<n<<"! = "<<fact<<endl;


	return 0;
}
