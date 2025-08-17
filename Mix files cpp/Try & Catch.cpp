/* Exception Handling:
		try, catch
1) hit the exception
2) throw the exception
3) catch the exception
4) perform the corrective action

*/
#include<iostream>
using namespace std;

int main() {

	int x;
	cout<< "Enter valueo of n : " << endl;
	cin >> x;

	try {
		if(x == 10)
			throw(x);
		if(x == 100)
			throw('e');
		if(x == 1000)
			throw(5.5F);
	} 

	catch(int x) {
		cout<< "Value of x for int : " << x;
	} catch(char x) {
		cout<< "Value of x for char : " << x;
	} catch(float x) {
		cout<< "Value of x is equ" << x;
	}

/*	USE FOR MULTIPLE THROUGH AND ONLY ONE CATCH.
	catch(...){   
		cout<< "some error \a";
	}

*/

	return 0;
}
