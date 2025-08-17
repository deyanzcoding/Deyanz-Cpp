//void poiner 

#include<iostream>
using namespace std;

int main(){

int n = 10;
float n1 = 20.3;
char n2 = 'a';

void *ptr;

ptr = &n;
cout << "n = " << n << "\nAddress = " << ptr << endl;

ptr = &n1;
cout << "n1 = " << n1 << "\nAddress = " << ptr << endl;

ptr = &n2;
cout << "n2 = " << n2 << "\nAddress = " << ptr;


return 0;
}
