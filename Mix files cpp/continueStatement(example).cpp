//Continue Statment example
//Skip those numbers which is divisible by 3. (1 --> 100)

#include<iostream>
using namespace std;
int main() {
	int num;
	cout<<"Enter any number : "<<endl;
	cin>>num;
		for(int i=1; i<=num; i++) {
			if(i%3 == 0) {
				continue;
			}
			cout<<i<<endl;
		}

	return 0;
}
