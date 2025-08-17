// experiment to store different variable pointer

#include<iostream>
using namespace std;

int main(){

int n = 10;
//float *ptr;    its wrong to store different datatype address in different variable.
int *ptr;

ptr = &n;

cout << "Value of n = " << n << endl;
cout << "Address of n = " << ptr ;



return 0;
}
