//Qs.no.9:- Write a C++ program to find out the area of a triangle and if any side s zero then display the message "There is no Triangle".

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float s,area_of_tri;
	int  a,b,c;

	cout<<"Enter 3 Sides of Triangle(with space) : ";
	cin>>a>>b>>c;

	if(a==0 || b==0 || c==0) {
		cout<<"There is no Triangle\n";
	}

	/*As we know that, area_of_triangle=square_root(s(s-a)(s-b)(s-c))
	 and, s=(a+b+c)/2;*/
	else {

		s=(a+b+c)/2;
		area_of_tri=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area of Triangle = "<<area_of_tri;
	}

	return 0;
}
