// Check Prime number in some range ..
// e.g:- range (10 to 20) ==> contains prime num '11,13,17,19'

#include<iostream>
using namespace std;
int main() {
	int a, b;    // ran = range
	cout<<"Enter two numbers(specific interval) : "<<endl;      // these number will be from lower to higher.
	cin>>a>>b;

	for(int num=a; num<=b; num++) {   //first loop is for check range numbers (a to b)
		int j;
		for(j=2; j<num; j++ ) {    //second loop is for check non-prime 'if any number is non-prime we skip them using break keyword.
			if( num%j == 0 ) {  
				break;
			}
		}
		if(j == num) {
			cout<<num<<endl;

		}
	}


	return 0;
}
