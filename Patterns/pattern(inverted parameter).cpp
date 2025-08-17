// Inverted Paramid

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter any number : ";
	cin>>n;

/* Here 1st loop run for row of inverse pyramid and it start from (i=n) and then i updation it become decrease (in desending order) like 5,4,3,2,1.
so it will help to reduce one star after endl.
and the 2nd loop is for print column wise star in specific condition. */
  
	for(int i=n; i>=1; i--) {
		for(int j=1; j<=i; j++) {
			cout<<" *";
		}
			cout<<endl;
	}
	return 0;
}
