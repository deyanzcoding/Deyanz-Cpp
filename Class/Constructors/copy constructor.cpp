//copy constructor:

#include<iostream>
using namespace std;
class demo {

	private:
		int x, y;

	public:
		demo() {
			x=10; y=20;
		}

		/* we use &aa because we want to recieve specific object called from main-function()
			if we use only aa then
		*/
	demo(demo &zz) {
			//swapping value of x into y, y into x... 
			x = zz.x;
			y = zz.y;
		}


		//just for print x & y values.
		void putData() {
			cout<<"\nX = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
		}

};
int main() {

	demo aa;   //default constructor
	cout << "aa values :: ";
	aa.putData();

	demo bb(aa);  // copy 1st constructor values.
	// demo bb = aa;

	cout << "\nbb values becomes :: ";
	bb.putData();


	return 0;
}
