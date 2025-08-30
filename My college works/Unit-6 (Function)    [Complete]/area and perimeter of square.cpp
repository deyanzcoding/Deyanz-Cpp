// Qs.(7):-  Write a C++ program having two function names area and perimeter to find the area and perimeterof a square. 

#include<iostream>
using namespace std;

int area_of_square(int n);
int perimeter_of_square(int m);

int main()
{
int n;
cout<<"Enter Length of the Square : "<<endl;
cin>>n;

cout<<"\nArea of Square = "<<area_of_square(n)<<endl;

cout<<"Perimeter of Square = "<<perimeter_of_square(n)<<endl;
return 0;
}

int area_of_square(int n)                 //   area of square = Length x Lenth;
{
	int area=n*n;
	return area;
}

int perimeter_of_square(int m)           //   perimeter of square = 4 x Length;
{
	int perimeter=4*m;
	return perimeter;
}