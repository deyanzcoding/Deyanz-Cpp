// GP series 
// 1 2 4 8 16 32 ...

#include<iostream>
using namespace std;

int main(){

int n; 
cout << "Enter any number : ";
cin >> n;

for (int i = 1; i <= n; i *= 2)      // similer as i = i*2 ;
	cout << i << " ";

return 0;
}
