// pattern 6 : for increasing number by 1

#include<iostream>
using namespace std;

int main(){

int n; 
int k = 1;

cout << "Enter number for(rows & col) : ";
cin >> n;

for(int i = 1; i <= n; i++) {
	for(int j = 1; j <= n; j++) {
		cout << k << " ";
		k++;
		
	} cout << endl;
}



return 0;
}
