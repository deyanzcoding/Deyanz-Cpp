/*Write a class Marks with three data members to store three marks. Write three member function in() to input marks, sum() to calculate and return the sum and
avg() to calculate and return the average marks.*/

#include <iostream>
// #include<conio.h>
using namespace std;

class Marks
{
private:
	int physics, math, cs;
	int total;

public:
	void in()
	{
		cout << "Enter Physics Marks : " << endl;
		cin >> physics;
		cout << "Enter Math's Marks : " << endl;
		cin >> math;
		cout << "Enter Computer Science Marks : " << endl;
		cin >> cs;
	}
	int sum()
	{
		total = (physics + math + cs);
		return total;
	}

	float avg()
	{
		return (total / 3.0); // 3.0 not 3 because type-casting to calculate as float
	}
};

int main()
{
	Marks MM;
	MM.in();
	cout << "Total Marks = " << MM.sum() << endl;
	cout << "Average = " << MM.avg();

	return 0;
}
