//Friend Function

#include<iostream>
using namespace std;
class addition {

	private:
		int a,b;

	private:
		void getData() {
			cout<<"Enter two numbers : "<<endl;
			cin>>a>>b;
		}
		void putData() {
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
		}
		friend int sum(addition);
};
int sum(addition aa) {
	aa.getData();
	aa.putData();
	cout << "Sum of two numbers = ";
	return(aa.a + aa.b);
}

int main() {

	addition aa;
	 cout << sum(aa);
 
	return 0;
}
