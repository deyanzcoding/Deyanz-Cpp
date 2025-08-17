//pointer

#include<iostream>
using namespace std;

int main(){

int a = 3;
int *pt = &a;



cout<< "Value of a : " << a << endl;
cout<< "Address of variable a : " << pt << endl;
cout<< "Value of *pt : " << *pt << endl;
cout<< "Value of &a : " << &a << endl;

return 0;
}
