//Qs.No(5):- Write a C++ program implementing inheritance between Employee(base class) and Manager(derived class).

#include<iostream>
using namespace std;
			char str[20];
class Employee {  //'base class' or 'parent class'
	public:
		void getData() {
			cout<<"Enter Your Name : ";
			cin>>str;
		}
};
class Manager : public Employee      //implementing public section of Employee class into Manager class.
 {
	public:
		void putData()
		{
			cout<<"\nYour Name is : "<<str;
		}
		
};
int main() {
Manager MM;    //Object Creation of Class Manager.
MM.getData();
MM.putData();   //As we know getData() function is define in Employee class but we well call it from Manager class. 

	return 0;
}
