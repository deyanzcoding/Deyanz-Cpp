// program to demonstrate pure virtual function

#include <iostream>
using namespace std;

class shape
{
protected:
    int n;

public:
    void getData()
    {
        cin >> n;
    }

    virtual float areaCalculate() = 0;
};

class square : public shape
{
public:
    float areaCalculate()
    {
        return (n * n);
    }
};

class circle : public shape
{
public:
    float areaCalculate()
    {
        return (3.14 * (n * n));
    }
};

int main()
{
    square ss;
    circle cc;

    cout << "Enter the length of the square : ";
    ss.getData();
    cout << "Area of square : " << ss.areaCalculate() << endl;

    cout << "\nEnter radius of the circle : ";
    cc.getData();
    cout << "Area of circle : " << cc.areaCalculate() << endl;

    return 0;
}