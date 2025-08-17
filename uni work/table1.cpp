// printing table 

#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter any number : " ;
cin >> n;

for (int i = 1; i <= n*10; i=n*10)
	if (n%i == 0)
	 	cout << i << endl;



return 0;
}
