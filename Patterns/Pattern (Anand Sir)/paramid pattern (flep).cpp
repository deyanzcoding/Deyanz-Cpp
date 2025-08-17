//flip of pyramid
/*      *
	  * *
	* * *
  * * * *
* * * * *
				*/

#include<iostream>
using namespace std;

int main() {

	int n;
	int i,j,s;

	cout<<"Enter any number : "<<endl;
	cin>>n;

	for(int i=1; i<=n; i++) {
	
		for(int j=1; j<=n-i; j++ )
			cout<<"  ";
			
		for(s=1; s<=i; s++)
			cout<<" *";
		cout<<endl;
	
	}

	cout<<"Enter any number : "<<endl;
	cin>>n;

	i=1;
	while(i<=n) {
		j=1;
		while(j<=n-i) {
			cout<<"  ";
			j++;
		}
		s=1;
		while(s<=i) {
			cout<<" *";
			s++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}







