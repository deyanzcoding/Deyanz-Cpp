// program to demonstrate constant keyword

#include <iostream>
using namespace std;

class A
{
    int x = 10;
    const int y = 20;

public:
    void printX()
    {
        x = 100;
        // y = 200; error

        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }

    const void printHello() {       //const function "means we can't copy there signature".
        cout << "Hello World";
    }

};

int main()
{
    A aa;
    aa.printX();
    aa.printHello();

    return 0;
}