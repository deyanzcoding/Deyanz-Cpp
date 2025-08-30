// prime & composite using function
#include<iostream>
using namespace std;

/*A positive integer which is only divisible by 1 and itself is known as prime number.
For example: 13 is a prime number because it is only divisible by 1 and 13 but, 15 is 
not prime number because it is divisible by 1, 3, 5 and 15.*/

int prime(int n)
{
		
	cout<<"Enter Number : "<<endl;
	cin>>n;
	int i;
	for(i=2; i<n; i++) {
		if(n%i==0) {
			cout<<"Composite!!\a\a"<<endl;
			break;
		}
		
	}

	if(i==n) {
		cout<<"Prime"<<endl;
	}
	return 0;
}

int main()
{
	int num;
prime(num);
return 0;
}
