// hybrid inheritence
#include<iostream>
using namespace std;

class A {
    public:
        void insideA() {
        cout << "Inside class A " << endl;
        }
};
class B : public A {
    public:
        void insideB() {
        cout << "Inside class B " << endl;
        }
};
class C {
    public:
        void insideC() {
        cout << "Inside class C " << endl;
        }
};
class D : public B, public C {
        /*Here B & C are publically inherited, and we know A also publically inherite to B so 
        We can say D uses members of A, B, C */
    public:
        void insideD() {
        cout << "Inside class D ";
        }
};

int main() {
    
    D dd;
    dd.insideA();
    dd.insideB();
    dd.insideC();
    dd.insideD();


    return 0;
}