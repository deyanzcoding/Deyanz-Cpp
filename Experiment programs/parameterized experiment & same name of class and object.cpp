// perameterized constructor..no arrgument 
// to check as object created by same name as class are created.

#include<iostream>
using namespace std;
class demo {
	private:
		int x,y;
	public:
		demo(int m, int n){
			x = m;
			y = n;
		}
		void putData(){
			cout<<"X = "<<x;
			cout<<"\nY= "<<y;
		}

};
int main() {

//demo demo;    it well through error because above we created parameterized constructor and here are no perameter, the below line is right.
 
demo demo(10,20);    // u can see object is created as same as class is created.
demo.putData();

	return 0;
}
