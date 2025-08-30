//Pointer Arithmetic.

#include<iostream>
using namespace std;
int main()
{
int a=10;
int*pa=&a;

cout<<"Address of a=   "<<&a<<endl;  //valid.
cout<<"Address of a=   "<<pa<<endl;   //valid.
 
pa++;
cout<<"Updated Address="<<pa<<endl;


 
return 0;
}
