//Qs.no.(5):- Writea program using for loop that prints product of all odd numbers from 1 to 10.

#include<iostream>
using namespace std;
int main() {

	int c,product=1;
    
    for(c=1; c<=10; c=c+2)   //c=1+2 =>3 then c=3+2 =>5 ...
    product*=c;      //or product=product*c.
	
	cout<<"The Product of odd integers from 1 to 10 are : "<<product;    //it will give 945.

	return 0;
}
