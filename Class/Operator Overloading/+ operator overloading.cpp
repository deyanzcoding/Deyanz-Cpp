/* Overload + operator
  	--> use of operator keyword
  	--> use of two objects(oprands)
	--> return_type well be class_name
	 

*/
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		void getData(){
			cout<<"Enter a number : ";
			cin >> a;
		}
		void putData(){
			cout<<"Value = " << a << endl;
		}
		demo operator+(demo bb){
			demo cc;
			cc.a = a + bb.a;
			return cc;
		}
};
int main(){
demo aa,bb,cc;

aa.getData();
bb.getData();
aa.putData();
bb.putData();

cc = aa + bb;

cout << "\nAfter aa + bb :: " << endl;
cc.putData();


return 0;
}
