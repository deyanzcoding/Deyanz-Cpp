// experiment of swapping two variables

#include<iostream>
using namespace std;

int main(){
 int a=3;
 int b=5;
 
 cout<<a<<" "<<b<<endl;

/* 
 //let's wrong swapp it.
 a = b;
 b = a;

cout<<a<<" "<<b<<endl;
*/

//let's right swapp it.

int temp = a;      //here temp=a=3;
a = b;            //now a=b=5;
b = temp;        //now b=temp=3;

cout<<a<<" "<<b<<endl;

	return 0;
}
