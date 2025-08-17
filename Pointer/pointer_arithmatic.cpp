// pointer arithmatic operator like ++, --, +, -

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    //[1] ++, --
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // +4
    ptr--;
    cout << ptr << endl; // -4

    //[2] +, -  mostly used in pointer array
    ptr = ptr + 1; //add 4byte
    cout << ptr << endl;
    ptr = ptr + 3; // add 12bytes (3 x 4 = 12)
    cout << ptr << endl;

    //now use in pointer array
    int arr[] = {1, 2, 3, 4, 5};

    cout << *(arr) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    cout << "\nPrint through loop ..." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }

    //subtrac two pointer to each other
    int* ptr1;
    int* ptr2 = ptr1 + 3;
    int* ptr3 = ptr2 + 1;

    cout << "\nsubtract two pointers from 1 another ... " << endl;
    cout << (ptr2 - ptr1) << endl; //2 int
    cout << (ptr3 - ptr1) << endl; //1 int

    //compare two pointer to each other
    int *p1;
    int *p2;

    cout << "\ncompare two pointers ... " << endl;
    cout << (p1 < p2) << endl;
    cout << (p1 > p2) << endl;
    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;

    return 0;
}