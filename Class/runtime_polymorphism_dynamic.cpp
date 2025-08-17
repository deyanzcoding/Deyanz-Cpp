// program to achive runtime polymorphism

#include <iostream>
using namespace std;

class A
{
public:
    virtual void eat()
    {
        cout << "Deyan is eating ...!" << endl;
    }
};

class B : public A
{
public:
    void eat()
    {
        cout << "Hasnain is eating ...!" << endl;
    }
};

int main()
{
    // pointer decleartion
    A *obj;

    // classes objects creation
    A obj1;
    B obj2;

    // assign obj1 to pointer
    obj = &obj1;
    obj->eat(); // calling base class eat()

    // assign obj2 to pointer
    obj = &obj2;
    obj->eat(); // calling derived class eat()

    return 0;
}