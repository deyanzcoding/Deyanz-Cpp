// Check Prime or Non-Prime

#include<iostream>
//#include<stdlib.h>   
using namespace std;
int main() {
//	system("COLOR 0a");  
	int num;
	int count=0;   //to count divisor

	cout<<"Enter any number : ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
		if(num%i == 0)   
		   count++;
	}
	
	if(count == 2)
		cout<<"Prime"<<endl;
	else
		cout<<"Non-prime(composites)";	


	return 0;
}
