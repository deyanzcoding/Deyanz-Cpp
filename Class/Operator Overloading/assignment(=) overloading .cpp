/* Assignment operator( = ) overloading
like if we want to assign one class to another, called assignment overloading
demo aa;
demo1 bb;
aa = bb;


*/
#include<iostream>
using namespace std;

class A {
		int a,b;
	public :
		void getData() {
			cout<<"Enter two numbers : ";
			cin >> a >> b;
		}
		void putData() {
			cout<< "a = " << a << endl;
			cout<< "b = " << b << endl;
		}
		void operator =(A bb) {
			a = bb.a;    
			b = bb.b;    //if there is more then 1 variable declared in the scope then we can initialize like this
		}
};

int main() {

	A aa,bb;
	cout<< "Enter values for aa : " << endl;
	aa.getData();
	
	bb = aa;   // assign aa values to bb.
	
	cout<< "\nAfter assignment(bb = aa) bb becomes : " << endl;
	bb.putData();  //as we assign aa of a value to bb of a value.
	

	return 0;
}
