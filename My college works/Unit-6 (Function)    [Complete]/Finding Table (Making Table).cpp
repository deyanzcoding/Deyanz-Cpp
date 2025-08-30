// Qs.(10):- Program to making Table.

#include<iostream>
using namespace std;

void table(int);           //prototype;


int main() {
int n;
cout<<"Enter Number (make table) : ";
cin>>n;

cout<<"\nTable of "<<n<<endl<<endl;
table(n);                        // where n is actual parameter;
	return 0;
}


void table(int x) {              // int x is formal parameter;
	for(int c=0; c<=10; c++) {
		cout<<x<<"x"<<c<<"="<<x*c<<endl;
	}
	
}