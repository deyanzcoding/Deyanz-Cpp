// Inline function concept

#include<iostream>
using namespace std;

inline int addition(int a, int b){
	return a+b;
}
inline int subtraction(int a, int b){
	return a-b;
}

int main(){

cout<<"addtion of 43 + 7 = "<<addition(43,7);
cout<<"\nsubtraction of 43 - 7 = "<<subtraction(43,7);
cout<<endl;

return 0;
}
