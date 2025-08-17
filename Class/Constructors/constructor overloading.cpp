//constructor overloading >> to make same name of constructor.

#include<iostream>
using namespace std;
class demo {

	private:
		int x,y;
	public:
		demo() {    //no arrgument
			x = 10;
			y = 20;
		}
		demo(int a){  //1 arrgument
			x=a;
			y=5;
		}
		demo(int a,int b) {  //2 arrguments
			x=a;
			y=b;
		}
		demo(int a,float b) { //2 arrguments but different data_types
			x = a;
			y = b;
		}

		void putData() {
			cout<<"x="<<x<<"\t y="<<y<<endl;
			cout<<"Addition of x+y = "<<x+y<<"\n\n";
		}


};
int main() {

demo aa;    //constructor of no arrgument
aa.putData();

demo bb(5);  //constructor of 1 arrgument
bb.putData();

demo cc(5,6);
cc.putData();

//demo dd(3,3.3);  // why it can't call demo(int, float)
//dd.putData();

	return 0;
}
