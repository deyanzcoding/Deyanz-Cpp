//Q.No(4):- Declare an array to hold the high temperature (to the nearest tenth of a degree) for each day of a year. Assign a value of 0 to each day.

#include<iostream>
using namespace std;
int main() {
	double temp[365]= {0,0};
	int c;
	for(c=0; c<=365; c++) {
		cout<<"Enter High Temperature of day "<<c+1<<" : ";        //for day first : 0+1=1st day,
		cin>>temp[c];
	}
	return 0;
}
