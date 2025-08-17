// adding of any number
//e.g :-  454 = 4+5+4 = 13;

#include<iostream>
using namespace std;

int main(){
int n;
int sum = 0;

cout << "Enter any number : " <<endl;
cin >> n;

while(n > 0){
	sum = sum + n%10;
	n=n/10;
}

cout<< "After sum = " << sum;


return 1; 
}
