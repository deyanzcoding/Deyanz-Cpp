// program to demonstrate bitwise operator

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int m = 8;

    cout << "AND : " << (n & m) << endl; // 0100 & 1000 = 0000 = 0
    cout << "OR : " << (n | m) << endl; // 0100 | 1000 = 1100 = 12
    cout << "XOR : " << (n ^ m) << endl; // 0100 ^ 1000 = 1100 = 12

    
    
    /* Bitwise-Left-Shift : 
    It well shift the binary digit into left place.
    and the vacant position on right-side filled with zeros.*/
    cout << "Bitwise left shift(1st) : " << (n << 1) << endl; // 100 --> 1000 = 8
    cout << "Bitwise left shift(2nd) : " << (n << 2) << endl; // 100 -->10000 = 16

    /* Bitwise-Right-Shift:
    It well shift the binary digit into right place.
    and the vacant position on left-side is filled with zeros.*/
    cout << "Bitwise left shift(1st) : "<<(10 >> 1) << endl;   //1010 --> 0101 = 5
    cout << "Bitwise right shift(2nd) :" << (10 >> 2) << endl;   //1010 --> 0010 = 5
    return 0;
}