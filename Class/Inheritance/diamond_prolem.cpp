/* program to solve diamond problem(dead problem)
        A
     B     C
        D
*/
#include <iostream>
using namespace std;

class A {
    protected:
        int x;
         int inputX() {
            x = 10;
            return x;
        }
};
class B : virtual public A {
    public:
        int y;
        int inputY() {
            y = 20;
            return y; 
        }
};
class C : virtual public A {
    public:
        int z;
        
        int inputZ() {
            z = 30;
            return z;
        }
};
class D : public B, public C {
    public:
         int summ;
       int sum() {
            summ =  inputX() + inputY() + inputZ();
            return summ;
       }
};


int main() {
    
D obj;
cout << obj.sum();

return 0;
}