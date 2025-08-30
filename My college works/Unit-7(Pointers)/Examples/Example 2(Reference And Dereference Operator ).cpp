//Dereference Operator '*'.

#include<iostream>
using namespace std;
int main()
{
int n=100;
int*pn;      //defines a pointer to n.
pn=&n;   //pn stores the address of 'n'.

int value_n;
value_n=*pn;   //dereference operaoter use to get again the value of n.

cout<<"The address of n= "<<&n<<endl;       //address of n.

cout<<"The value of n= "<<n<<endl;      //value of n.

cout<<"The address of pn= "<<pn<<endl;    //address of n.
cout<<"The value of (*pn)= "<<*pn<<endl;   //Get again value of n.
cout<<"The value of value_n= "<<value_n<<endl;  //Get again value of n.

return 0;
}
