// max out of three Numbers.

#include<iostream>
using namespace std;

class Maximum {
	private:
		int a,b,c,max;
	public:
		void getData();
		void putData();
};

void Maximum :: getData() {
	cout<<"Enter 3 Numbers(with spaces) : ";
	cin>>a>>b>>c;
}
void Maximum :: putData() {
max=a;
max=(b>max)?b:max;      //for Min just change '>' sign to '<'.
max=(c>max)?c:max;
cout<<"Maximum No = "<<max;
}
int main() {
	Maximum oo;
	oo.getData();
	oo.putData();

	return 0;
}
