#include<iostream>
using namespace std;
int main()
{
int a = 10;
int *pa;
pa=&a;

cout<<"value of a: "<<*pa<<endl; // show value of a;

int **pointer_pointer_q;
pointer_pointer_q=&pa;
cout<<"value of just q is : "<<pointer_pointer_q<<endl;  //address of pa.
cout<<"Value of q(pointer to pointer) is : "<<**pointer_pointer_q;   //value of pa.


return 0;
}
