//reverse of a given number.

#include<iostream>
using namespace std;

int main() {
	int i, rev=0;

/*
	cout<<"\n Enter any number : "<<endl;
	cin >> i;

	while(i>0) {
		rev = (rev * 10)+ i%10;
		i=i/10;
	}
	cout<<"Reverse = "<<rev;
*/


// now on for loop;
cout<<"Enter any number : " <<endl;
cin>> i;

for( ; i>0; i/10){
	rev = (rev * 10) + i%10;
	i = i/10;
}
cout<<"Given number after reverse : "<< rev << endl;

	return 0;
}
