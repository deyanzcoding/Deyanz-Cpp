
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter Number : "<<endl;
	cin>>n;

	int i;  
	for(i=2; i<n; i++) {
		if(n%i == 0) {
			cout<<"Composite!!\a\a"<<endl;   // Where \a is escape sequence after 'if' condition satisties is shows "Composite!!" & create beef sound.
			break;
		}
	}

	if(i==n) {
		cout<<"Prime"<<endl;
	}

	return 0;
}