// perameterized constructor.. "To pass perameter(argument) in constructor."

#include<iostream>
#include<conio.h>
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
			cout<<"\nY = "<<y;
		}

};
int main() {

int x,y;
cout<<"Enter any two numbers : "<<endl;
cin>>x>>y;

demo demo(x,y);
demo.putData();

	getch();
	return 0;
}
