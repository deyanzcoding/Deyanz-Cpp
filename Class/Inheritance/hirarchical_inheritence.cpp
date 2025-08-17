//hirarichal inheritence
#include<iostream>
using namespace std;

class A {   //base class
    public:
    int a = 10;

        void Val_a() {
            cout << "Value of a = " << a << endl;
        }
};
class B : public A{   // publically inherited A
    public:
    int b = 20;

        void Val_b() {
            cout << "Value of b = " << b << endl;
        }
};
class D : public B{     //class D publically inherite class B, and since Class B also inherite class A , so D well use A and B both...
    public:
        int d = 40;

        void Val_d() {
            cout << "Value of d = " << d << endl;
        }
};
//==============================================================================================//
class C : public A{   // publically inherited A
        public:
    int c = 30;

        void Val_c() {
            cout << "Value of c = " << c << endl;
        }
};

int main() {
    
    B bb;    D dd;   C cc;   

    bb.Val_a();     //i call func of Class A from class B(obj)
    bb.Val_b();

    dd.Val_a();
    dd.Val_b();
    dd.Val_d();

    cc.Val_a();     //i call func of Class A from class C(obj)
    cc.Val_c();

    return 0;
}