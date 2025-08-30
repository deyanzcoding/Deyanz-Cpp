// Qs.no.():-Write a C++ program to find out the roots of a quadratic equation.

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main() {

    float a, b, c, root1, root2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;        //disc=b^2-4ac;
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        root1 = -b/(2*a);
        cout << "Root1 = Root2 =" << root1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "Root1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "Root2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
	
	getch();
    return 0;
}