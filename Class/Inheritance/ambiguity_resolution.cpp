// Ambiguity Resolution...
#include<iostream>
using namespace std;

class A {
    protected:
        int a;
    public:
        void input() {
            cout << "Enter A : " ;
            cin >> a;
        }
        void displayA() {
            cout << "A = " << a << endl;
        }
};
class B {
    protected:
        int b;
    public:
        void input() {
            cout << "Enter B : " ;
            cin >> b;
        }
        void displayB() {
            cout << "B = " << b << endl;
        }
};
class C : public A, public B {
    protected:
        int c;
    public:
        void input() {
           // to access input() function of class A & B..
            A :: input();
            B :: input(); 
             
            cout << "Enter C : " ;
            cin >> c;
        }
        void displayC() {
            cout << "C = " << c << endl;
        }
};

int main() {
    
    C cc;
    cc.input() ;

    cc.displayA();
    cc.displayB();
    cc.displayC();
    return 0;
}