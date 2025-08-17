// program to demonstrate single_inheritence & parameterized constructor

#include <iostream>
using namespace std;
class base
{
	/*Homework :
		make constructor overloading in base class means that more then 1 constructor in base class*/

public:
	string name;
	// 1st constructor
	base(int x) : base(10, 20)
	{
		cout << "Present in base(1 parameter) :: " << endl;
		cout << "X = " << x << endl;
	}
	//2nd constructor
	base(int a, int b) : base(12, 14, 16)
	{
		cout << "Present in base(2 parameter) :: " << endl;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
	}
	//3rd constructor
	base(int x, int y, int z) {
		cout << "Present in base(3 parameter) :: " << endl;
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "Z = " << z << endl;
	}
};
class child : public base
{
public:
	int marks;

public:
	child(int z) : base(z)
	{
	cout << "Present in child class :: " << endl;
	cout << "Z = " << z << endl;
	}

};
int main()
{
	child ob(100);

	return 0;
}
