//loop in poiner

#include<iostream>
using namespace std;

int main(){

float mark[6], *ptr;
cout << "Enter six number : \n" ;
for (int i = 0; i < 6; i ++)
cin >> mark[i];

ptr = mark;

cout << "Enter values are given : \n";
for (int i = 0; i < 6; i ++)
 	cout << *ptr++ << "\n";


return 1;
}
