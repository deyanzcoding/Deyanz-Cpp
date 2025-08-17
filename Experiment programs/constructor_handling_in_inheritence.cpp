// constructor handling in inheritence

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void val_a()
    {
        cout << "A = " << a << endl;
    }
};
class B
{
protected:
    int b;

public:
    B(int y)
    {
        b = y;
    }
    void val_b()
    {
        cout << "B = " << b << endl;
    }
};
class C : public A, public B
{
    int c;

public:
    C(int p, int q, int z) : A(p), B(q)
    {
        c = z;
    }
    void val_c()
    {
        cout << "C = " << c;
    }
};

int main()
{
    C cc(10, 20, 30);
    cc.val_a();
    cc.val_b();
    cc.val_c();

    return 0;
}