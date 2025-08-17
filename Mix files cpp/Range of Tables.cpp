// print table range (1st n ---> last n)

#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cout<<"Enter range between two number : "<<endl;
	cin>>n1>>n2;

	for(int i=n1; i<=n2; i++) { 
		for(int j=n1; j<=10; j++) { 		//what is the problem plz
			cout<<n1<<"x"<<j<<"="<<n1*j<<endl;
		}
		cout<<endl;
	}

	return 0;
}
