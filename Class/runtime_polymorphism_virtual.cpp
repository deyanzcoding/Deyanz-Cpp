// program to use of virtual function

#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Base Class" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived Class" << endl;
    }
};

int main()
{

    A *bptr;
    A obj;
    B obj1;
    bptr = &obj;
    bptr->show();

    bptr = &obj1;
    bptr->show();

    return 0;
}