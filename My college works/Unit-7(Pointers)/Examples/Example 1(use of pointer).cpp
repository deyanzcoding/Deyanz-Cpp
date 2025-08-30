//Initialize pointer variable and (Reference Operator '&')

#include<iostream>
using namespace std;
int main()
{
float x=7.3;
float*fpointer;
fpointer=&x;    //reference operator.

cout<<"The Address of x= "<<&x<<endl;
cout<<"The value of x= "<<x<<endl;
cout<<"The Value of fpointer= "<<fpointer;



return 0;
}