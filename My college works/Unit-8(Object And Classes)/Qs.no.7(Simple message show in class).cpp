//Write a class that displays a simple message on the screen whenever an object of that class is created.

#include<iostream>
using namespace std;

class deyan
{

public:
	deyan(){  //Constructor because name of class and function is same.(and datatype of function well no need.)
		cout<<"I well become a H@cker!!";
	}
	
};

int main()
{
deyan dd;       //object creation.   (just create object of class and it automatically call)

return 0;
}
