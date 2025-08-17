// demostrating refernce and de_reference

#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int a, b, s;
int *ptr1, *ptr2;
ptr1 = &a;
ptr2 = &b;

cout << "Enter 1st number : " << endl;
cin >> *ptr1;

cout << "Enter 2nd number : " << endl;
cin >> *ptr2;

s = *ptr1 + *ptr2;

cout << *ptr1 << " + " << *ptr2 <<" = "<< s << endl;


return 0;
}
