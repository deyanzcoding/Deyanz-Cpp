//Qs.no.(4):- Write a C++ Program to find out maximum value out out of three(3) integers using conditional operator.

#include<iostream>
using namespace std;
int main(){
int a,b,c,d,max;

cout<<"Enter 4 Integers(with spaces) : ";
cin>>a>>b>>c>>d;

max=a;
max=(b>max)?b:max;
max=(c>max)?c:max;
max=(d>max)?d:max;

cout<<"Maximum integer is "<<max;
return 0;
}
