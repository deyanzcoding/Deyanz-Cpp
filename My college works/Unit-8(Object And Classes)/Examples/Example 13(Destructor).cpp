//Destructors in Class.

#include<iostream>
using namespace std;

class A {
	public:
		A(){
			cout<<"i am Deyan!!"<<endl;
		}
		~A(){      //destructor.
			cout<<"i am Usaf!!";         //usaf is my best friend.       
		}
//		~A(){                              //not valid because alredy previous declare (only one time will declare.)
//			cout<<"i am again Deyan!!";
//		}

};

int main() {
A a1;

	return 0;
}
