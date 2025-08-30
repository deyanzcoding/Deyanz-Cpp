// Qs.No.(10):-Write a C++ program to read the temperature of the whole week in an array and then find the hottest day of the week.

#include<iostream>
using namespace std;
int main() {
	int temp[7];
	int max=0,hot=0;
	cout<<"Enter 7 days Temperature: "<<endl;

	for(int c=0; c<7; c++){   //this loop help to get 7 days temperature.
		cout<<"Day "<<c+1<<" Temperature = ";
		cin>>temp[c];     
		      }
// to find hottest day,so;
	for(int c=0; c<7; c++) {  //this loop help to find hottest day of the week.
		if(temp[c]>max) {
			max=temp[c];  
			hot=c+1;
		}

	}
	cout<<"Hottest day of the Week is day "<<hot;
	return 0;
}