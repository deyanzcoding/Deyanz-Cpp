//Example No: 1 (page:174) implementation the class CRectangle descussed.

#include<iostream>
using namespace std;

class CRectangle {  //class well always out from the "int main". And without simicolon ";".
	private :      //we can't change or access private functions or variable.
		int x,y;
	public :
		void set_values(int a,int b) {   //just declare a function.(to access the private variables )
			x=a;
			y=b;
		}
		void area() {
			cout<<"Area of Rectangle = "<<(x*y);
            }
        };
int main() {
CRectangle r1;   // object creation for above class.

r1.set_values(3,4);  //call the funciton present in class CRectangle.  
r1.area();   //call the area function present in class CRectangle.   || This function calculate the values because we write above "area()".



	return 0;
}
