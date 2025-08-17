// sum of all numbers upto n.    e.g:-  5 : 5+4+3+2+1 = 15

#include<iostream>
using namespace std;

int sum(int n) {
	int ans=0;
	for(int i=1; i<=n; i++){
		ans += i;
	}
		cout<<ans;
	return 0;
}

int main() {
	int n;
	cout<<"Enter any number : "<<endl;
	cin >> n;

	sum(n);

	return 0;
}
