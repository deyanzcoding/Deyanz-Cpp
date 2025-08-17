//finbanacii series upto n terms

// e.g: 5 term ,, 1 1 2 3 5.
#include<iostream>
using namespace std;

int main(){
int n;
int x,y,z;
int count=1;

cout<<"Enter any term : "<<endl;
cin >> n;

x=0;
y=1;
z=0;

/*
while( count<=n){
	
	cout<<"\n"<<z;
	x=y;
	y=z;
	z=x+y;
	count = count+1;
	
}

*/


for(count; count<=n; count++){

	cout<<"\n"<<z;
	x=y;
	y=z;
	z=x+y;
}

return 0;
}
