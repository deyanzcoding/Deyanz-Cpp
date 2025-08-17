 /* pirnt if 'a' to 'z'  -->lower_case
 	else if  'A' to 'Z'  -->upper_case
 		else '0' to '9'  -->digits

	
	Ascii table we know that upper_case start from 65 to 90.
						and  lower_case start from 97 t0 122.
						and digit start start from 48 to 57.

 */		

#include<iostream>
using namespace std;

int main(){
char n;

cout<<"Enter any character : " << endl;
cin >> n;

int upper=65;
	while(upper<=90){   // for lower_case
		if(n == upper){
		cout<<"Upper case";
		}
		upper++;
	}
int lower=97;   //for upper_case
 	while(lower <= 122){
		if(n == lower){
		cout<<"Lower case";
		}
		lower++;
	}

int digit=48;
	while(digit <= 57){   //for digit
		if(n == digit){
		cout<<"Digit";
		}
		digit++;
	}

return 0;
}
