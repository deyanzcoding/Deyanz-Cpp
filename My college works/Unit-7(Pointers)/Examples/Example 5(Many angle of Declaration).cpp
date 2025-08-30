//As int*x;  *int x;    int x*;

#include<iostream>
using namespace std;
int main()
{
int*x;   // Valid.
*int x;  // Not Valid.
int x*;  //Not Valid.

cout<<"Address of x : "<<&x;


return 0;
}
