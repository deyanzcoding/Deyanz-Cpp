#include<iostream>
using namespace std;

class addition
{
	int a,b;     //by default it well be private;
	public:
		void getData();  //define below.
		void putData();  //define below.
};


void addition :: getData() //datatype_of_funciton class_name :: funciton_name()
{
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
}
void addition :: putData()
{
	cout<<"\nAddition = "<<a+b; 
}

int main()
{
addition aa;   //addition is like datatype.(int,float etc..) but user-define datatype.
aa.getData();
aa.putData();

return 0;
}
