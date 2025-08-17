// static data member

#include<iostream>
using namespace std;
class demo{
	
	private : 
	int x,y;
	static int z;
	
	public:
		void getData(int a, int b){
			x = a;
			y = b;
			z = z+1;
		}
		void putData(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"z = "<<z<<endl<<endl;
		}

	
};
int demo::z;
int main(){

demo aa,bb;
aa.getData(5,10);
aa.putData();

bb.getData(10,20);
bb.putData();

return 0;
}
