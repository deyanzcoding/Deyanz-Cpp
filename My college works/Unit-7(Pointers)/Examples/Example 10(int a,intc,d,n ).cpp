// int a,b,c;
 // int a;        (are both are same.)

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
int d;

int*pd;
pd=&d,&a,&b,&c,&d;    //all are valid.

cout<<"Address:"<<&a<<"  "<<&b<<"  "<<&c<<"  "<<&d;



return 0;
}
