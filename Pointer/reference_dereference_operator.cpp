// Reference and De-reference operator, NuLL pointer

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    //use of reference operator to store address
    int* ptr = &x;  

    // use of de-reference operator to retrive the value on address
    cout << (ptr) << endl;
    cout << *(ptr) << endl;

    //use of pointer-to-pointer
    int** parPtr = &ptr;

    cout << (parPtr) << endl;
    cout << *(parPtr) << endl;  // retrive address of ptr
    cout << **(parPtr) << endl; // retrive value of ptr




    //Null pointer
    int* num = NULL;
    cout << num << endl;    //0
    cout << *(num) << endl; //can't perform de-reference
 
    return 0;
}