// Single Inheritence...

#include<iostream>
using namespace std;

class A {
    protected:
        int x;
    public:
        void first_num() {
            cout << "Enter 1st number :: ";
            cin >> x;
        } 

        /*accesser function().
        int getX() {
            return x;
        }*/
      
};
class B : public A {
    int y;

    public:
        
        void second_num() {
            cout << "Enter 2nd number :: " ;
            cin >> y;
        }  
        void display() {
            // cout << getX() <<" + " << y << " = " << getX() + y;      only for accessor function
            cout << x <<" + " << y << " = " << x + y;
        }
};

int main() {
    B bb;
    bb.first_num();
    bb.second_num();
    bb.display();




    return 0;
}