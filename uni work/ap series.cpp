// AP series of 1, 3, 5, 7, ....

#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter any number : " ;
cin >> n;

for (int i = 1; i <= n; i += 2)
	cout << i << " ";

return 0;
}
