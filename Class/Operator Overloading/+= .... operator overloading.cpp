// operator overloading in class (+=, -=, *=, /=)

#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		void getData(){
			cout << "Enter a number : ";
			cin >> a;
		}
		void putData(){
			cout<<"a = " << a << endl;
		}
		void operator +=(demo bb){
			a = a + bb.a;
		}
};
int main(){
demo aa,bb;

cout<< "For aa:";
aa.getData();
cout<< "For bb:";
bb.getData();

cout<< "\naa.";
aa.putData();
cout<< "bb.";
bb.putData();

aa += bb;

cout<< "\nAfter compound operator applied (aa += bb) : " << endl;

cout<< "aa.";
aa.putData();
//cout<< "bb.";
//bb.putData();  //Not be change.

return 0;
}