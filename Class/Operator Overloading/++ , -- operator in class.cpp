//++ , -- operator in class :- demo aa;  aa++

#include<iostream>
using namespace std;
class demo{
	int x;
	public:
		void getData(){
			cout<<"Enter no : " << endl;
			cin >> x;
		}
		void putData(){
			cout<< "Value of x = " << x <<endl;
		}

		void operator ++(int){ 		// postfix operator overloading
			x = x+1;
		}
};
int main(){
demo aa;
aa.getData();
aa.putData();

//++aa;   //no need of 'int' above operator++ function().

aa++;
aa.putData();


return 0;
}
