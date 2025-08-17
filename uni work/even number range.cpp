// print even number from n to n

#include<iostream>
using namespace std;

int main(){

int start, end;

cout << "Enter start number : ";
cin >> start;
cout << "Enter end number : ";
cin >> end;

for (int i = start; i <= end; i += 2) {
	if ( i%start == 0 )
		cout << i << " ";
}



return 0;
}
