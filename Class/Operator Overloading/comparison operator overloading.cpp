// comparison operator overloading

#include <iostream>
using namespace std;

class Demo {
	public:
		int x, y;

		Demo(int a, int b) {
			x = a;
			y = b;
		}
	
//		[1]- operator overloading for <
		bool operator <(Demo ob2) {
			if (x < ob2.x && y < ob2.y)
				return true;
			else
				return false;
		}
		
//		[2]- operator overloading for >
		bool operator >(Demo ob2) {
			if (x > ob2.x && y > ob2.y)
				return true;
			else
				return false;
		}
		
//		[3]- operator overloading for <=
		bool operator <=(Demo ob2) {
			if ( (x < ob2.x || x == ob2.x)	&& (y < ob2.y || y == ob2.y))
				return true;
			else
				return false;
		}
		
//		[4]- operator overloading for >=
		bool operator >=(Demo ob2) {
			if ( (x > ob2.x || x == ob2.x)	&& (y > ob2.y || y == ob2.y))
				return true;
			else
				return false;
		}
		
//		[5]- operator overloading for ==
		bool operator ==(Demo ob2) {
			if ( x == ob2.x && y == ob2.y )
				return true;
			else
				return false;
		}
		
//		[6]- operator overloading for !=
		bool operator !=(Demo ob2) {
			if ( x != ob2.x && y != ob2.y )
				return true;
			else
				return false;
		}
};

int main() {

	Demo ob1(1, 2);
	Demo ob2(2, 3);

	cout << "Is ob1 < ob2  ?? " << (ob1 < ob2) << endl;		//1
	cout << "Is ob1 > ob2  ?? " << (ob1 > ob2) << endl;		//0
	cout << "Is ob1 <= ob2 ?? " << (ob1 <= ob2) << endl; 	//1
	cout << "Is ob1 >= ob2 ?? " << (ob1 >= ob2) << endl;	//0
	cout << "Is ob1 == ob2 ?? " << (ob1 == ob2) << endl;	//0
	cout << "Is ob1 != ob2 ?? " << (ob1 != ob2) << endl;	//1

	return 0;
}
