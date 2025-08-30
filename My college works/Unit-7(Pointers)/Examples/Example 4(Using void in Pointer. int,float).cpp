//Using void in Pointer.

#include<iostream>
using namespace std;
int main()
{
int x;
float y;
char z;  // char address not be found.

int*pointer_x;  
float*pointer_y;
char*pointer_z;

pointer_x=&x;   // Valid.
pointer_y=&y;  // Valid.
pointer_z=&z;  // Valid.

cout<<"The Address of x="<<&x<<endl;
cout<<"The Address of y="<<&y<<endl;
cout<<"The Address of z="<<&z<<endl;

return 0;
}
