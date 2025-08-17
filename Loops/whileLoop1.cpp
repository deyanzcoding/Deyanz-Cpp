#include<iostream>
using namespace std;

/*While-Loop is use when we want to check only condition,
if condition is ture then the loop iterate otherwise terminate.

==> Gerally it is use for infinite iteration.*/

int main(){
int num;
cout<<"Enter any Number : "<<endl;
cin>>num;

while(num > 0){
	cout<<num<<endl;
	cout<<"Enter any Number : "<<endl;	
	cin>>num;
}



	return 0;
}
