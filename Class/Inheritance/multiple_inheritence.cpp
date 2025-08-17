// Multiple inheritence...
#include<iostream>
using namespace std;

class A {
    protected:
        int a;
    public:
        void getA() {
            cout << "Enter value of A : ";
            cin >> a;
        }
};
class B {
    protected:
        int b;
    public:
        void getB() {
            cout << "Enter value of B : ";
            cin >> b;
        }
};
    
class C : public A, public B {      //  C is inherited publically A & B
    int sum;
   
    public:
        void result() {
            sum = a + b;
            cout << a << " + " << b << " = " << sum;
        }
};

int main() {
    
    C cc;
    cc.getA();
    cc.getB();
    cc.result();

    return 0;
}