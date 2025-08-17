// if we can't put any access specifier then what well be the default access specifer for inherited class
#include<iostream>
using namespace std;
class A {
    protected : 
        int x;
    public:
        void getData() {
            cout << "Enter x value :: ";
            cin >> x;
        }
};
// class B : private A {
//      or
class B : A {

    public:
        void display() {
            cout << "Value of X = " << x;
        }
};
int main() {
    
    B bb;
    bb.getData();   // can't access because inherited as private... thus getData() act as private and we can't use private directly in main function().
    bb.display();




    return 0;
}