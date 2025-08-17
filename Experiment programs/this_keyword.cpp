// this keyword experiment

#include<iostream>
using namespace std;

class Demo_this {
    private:
        int age;    //data_member
        static int x;
    public:
        void getAge(int age) {
            this->age = age;
            cout << "Age = " << age;
        }
        // static void getX() {
        //     this->
        // }
};

int main() {
    
    Demo_this dd;
    dd.getAge(45);
    

    return 0;
}

/* conclustion::
    *   Not be use outside the class.
    *   Not use in main function.
    *   Not use in static function. [only be use in non-static member function]
    
    *   It is optional, so it is use for only clarity purpose...
*/