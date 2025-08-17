// Array of object : To make array of specific object;
// Object of array : To make array inside object.

#include<iostream>
using namespace std;

class xyz{
	int a,b;
	
	public:
	void getData(){
		cout<<"Enter 2 number : ";
		cin>>a>>b;
	}
	void putData(){
		cout<<"\na= "<<a<<"\tb= "<<b;
	}
};

int main(){
xyz xx[5];

for(int i=0; i<5; i++){
	xx[i].getData();
}

for(int i=0; i<5; i++){
	xx[i].putData();
}

/*just for jun:
 if you want to run main() infinity number, you can call them inside original main function.at last.
	cout<< main();
*/
	return 0;
}


