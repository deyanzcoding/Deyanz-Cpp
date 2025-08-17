// forLoop in class

#include<iostream>
using namespace std;

class loop{
	public:
	void putData();	
	
};

int main(){

loop ll;
ll.putData();

	return 0;
}

	void loop :: putData(){
	int i;
	for(i=1; i<=10; i++){
		cout<<"\n"<<i;
	}
	}