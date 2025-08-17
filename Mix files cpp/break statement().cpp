//break statement

//program to print 10 positive numbers & skip 5 on iteration.
// 1 2 3 4 5  after 5 loop well be terminate.

#include<iostream>
using namespace std;

int main() {

	int i=1;
	while(i<=10) {
		cout<<"\n"<<i;

		if(i == 5)
		break;

		i++;
	}



	return 0;
}
