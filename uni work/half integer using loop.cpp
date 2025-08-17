// half of integer using for loop

#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter any number : ";
cin >> n;

for (int i = n/2; i <= n; i++)
	{
		cout << i;
		break;
	}



return 0;
}
