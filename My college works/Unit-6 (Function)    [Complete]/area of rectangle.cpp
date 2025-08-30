/*   Qs.(6):-Write a C++ program having a function name "rectangle" to read in the length and width of a rectangle from the
keyboard and find the area of the rectangle. The result should be returned to the main program for displaying on the screen.    */

#include<iostream>
using namespace std;

int rectangle(int l,int w)
{
	int area_of_rectangle=l*w;           // area of rectangle = length x width;
	return area_of_rectangle;
}

int parameter_of_rectangle(int w,int l)
{
	int para_of_rectangle=2*(l+w);
	return para_of_rectangle;
}


int main() {
int length,width;
cout<<"Enter Length of Rectangle : "<<endl;
cin>>length;

cout<<"Enter width of Rectangle : "<<endl;
cin>>width;

cout<<"Area of Rectangle = "<<rectangle(length,width)<<endl;
cout<<"Parameter of Rectangle = "<<parameter_of_rectangle(length,width);
	return 0;
}
