// program to declare and initialize vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector decleration
    vector<int> vec;

    // vector initialization
    vector<int> vec1 = {1, 3, 6, 9, 12};
    cout << vec1[0] << endl; // 1
    cout << vec1[1] << endl; // 3
    cout << vec1[2] << endl; // 6

    // vector initialization 2nd method
    vector<int> vec2(3, 0);
    cout << vec2[0] << endl; // 0
    cout << vec2[1] << endl; // 0
    cout << vec2[2] << endl; // 0

    //accessing value of vector using for-each loop
    vector<char> vec3 = {'a', 'b', 'c', 'd', 'e'};

    for (char val : vec3) {
        cout << val << " ";
    }

    return 0;
}