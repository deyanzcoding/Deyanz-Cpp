// Qs.no.(9):- Write a C++ program to find out the area of a rectangle and display the result on screen.

#include<iostream>
using namespace std;
int main() {

	int area,length,width;
	cout<<"Enter length of Rectangle : ";
	cin>>length;

	cout<<"\nEnter width of Rectangle : ";
	cin>>width;

	area=length*width;       //area of rectangle = Length x Width.
	cout<<"\n Area of Circle is : "<<area;

	return 0;
}
