//Find HCF (gcd) of 2 numbers 

#include<iostream>
using namespace std;

int gcd(int a,int b){
	while(b!=0){
	int rem = a%b;
		a=b;
		b=rem;
	}
return a;
}

int main(){

int a,b;
cout<<"Enter two numbers : "<<endl;
cin>>a>>b;

cout<<"After HCF : "<<gcd(a,b);



return 0;
}
