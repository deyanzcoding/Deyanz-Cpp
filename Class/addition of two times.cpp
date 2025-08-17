// Addition of two times
//e.g:- 1:30 + 2:40 = 4:10.

#include<iostream>
using namespace std;

class Time{
	int h,m;
	public:
		void getData(){
			cout<<"Enter hours & minuts : "<<endl;
			cin>>h>>m;
		}
		void putData(){
			cout<<"\nHours = "<<h;
			cout<<"\tMinuts = "<<m;
		}
		void sum(Time t1,Time t2){
			h = (t1.m + t2.m)/60;   //m1,m2
			m = (t1.m + t2.m)%60;
			h = h + (t1.h + t2.h);
		}
};

int main() {

Time t1,t2,t3;   //object creation.

t1.getData();
t2.getData();

t3.sum(t1,t2);

t1.putData();
t2.putData();

t3.putData();
	return 0;
}
