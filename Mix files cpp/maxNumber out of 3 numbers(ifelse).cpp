// max number out of 3 numbers..

#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter 3 num : "<<endl;
cin>>a>>b>>c;

if((a>b) && (a>c)){
	cout<<"Max = "<<a;
}
else if((b>c) && (b>a)){
	cout<<"Max = "<<b;
}
else{
	cout<<"Max = "<<c; 
}


	return 0;
}
