#include<iostream>
using namespace std;
int main()
{
int n=10;
int*pn;
pn=&n;

cout<<"Value of n : "<<n<<endl;
cout<<"Value of Pn : "<<*pn<<endl;

*pn=100;  //value update.

cout<<"Value of n becomes : "<<n<<endl; 



return 0;
}
