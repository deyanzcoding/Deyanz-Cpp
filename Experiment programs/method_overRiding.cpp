// method overring

#include<iostream>
using namespace std;
class demo_base {

    public:
    void show() {
        cout << "I'm in base class ";
    }

};

class demo_derived : public demo_base{
public:
    void show() {
        cout << "I'm in derived class";
    }


};


int main() {

    cout << "Well be call derived method (by default)..." << endl;
    demo_derived dd;
    dd.show();

    cout << "But if we want to call method of base class we do ..." << endl;
    // dd.demo_base.show();

    return 0;
}