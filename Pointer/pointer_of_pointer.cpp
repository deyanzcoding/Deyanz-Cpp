// pointer of pointer 

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    //simple pointer
    int* ptr = &x;

    //pointer of pointer
    int** parPtr = &ptr;

    //address of variable
    cout << &x << endl;
    cout << ptr << endl;

    //address of pointer
    cout << &ptr << endl;
    cout << parPtr << endl;

return 0;
}