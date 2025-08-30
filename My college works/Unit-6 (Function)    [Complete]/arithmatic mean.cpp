// Qs.(5):- Write a program with a function name "mean" to read in three integers from the keyboard to find the arithmatic mean.

#include<iostream>
using namespace std;
int mean(int a,int b,int c) {

int ari=(a+b+c)/3;
return ari;
}


int main() {
int x,y,z;
cout<<"Enter Three Numbers(with spaces) : ";
cin>>x>>y>>z;

cout<<"Arithmatic Mean(A.M) = "<<mean(x,y,z);




	return 0;
}
