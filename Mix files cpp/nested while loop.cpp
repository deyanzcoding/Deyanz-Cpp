//nested while loop

#include<iostream>
using namespace std;

int main() {

	int i,j;
	
	i=1;
	while(i<=5) {
		j=1;
		while(j<=5) {
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}
