#include <iostream>
using namespace std;

class demo
{
private:
	int x, y;

public:
	demo()
	{
		x = 10;
		y = 20;
	}

	demo(int a, int b)
	{
		x = a;
		y = b;
	}

	void display()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int main()
{

	demo ob1;
	ob1.display();

	cout << endl;
	demo ob2(12, 14);
	ob2.display();

	cout << endl;
	ob2 = ob1;
	ob2.display();

	// demo ob2(122, 144) = demo ob1(12, 14);		this way will give error
	// ob2.display();

	return 0;
}
