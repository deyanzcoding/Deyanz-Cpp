// multi-level inheritence

#include <iostream>
using namespace std;
class A
{
    protected:
    int x;

    public:
    void first_num()
    {
        cout << "Enter 1st num :: ";
        cin >> x;
    }
};
class B : public A{
    protected:
    int y;

    public:
    void second_num()
    {
        cout << "Enter 2nd num :: ";
        cin >> y;
    }
};
class C : public B
{
    int sum;

    public:
    void display()
    {
        cout << "Sum = " << x + y;
    }
};
int main()
{
    C cc;
    cc.first_num();
    cc.second_num();
    cc.display();
    
    return 0;
}