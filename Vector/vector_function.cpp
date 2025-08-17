// program to understand vector functions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 12};

    // size() : "To see the length/size of the vector"
    cout << "\nBefore push_back :: " << vec.size() << endl;

    // push_back() : "To insert any element at last in vector"
    vec.push_back(38);
    vec.push_back(39);

    cout << "After push_back :: " << vec.size() << endl;

    // pop_back() : "To delete only 1 element from the last of vector"
    vec.pop_back();

    cout << "After pop_back :: " << vec.size() << endl;

    //front() : "To access first element"
    cout << "\n1st element : " << vec.front();

    //back() : "To access last element"
    cout << "\nnth element : " << vec.back() << endl;

    //at() : "To access specific index value of the vector"
    cout << "\nIndex 0 = " << vec.at(0) << endl;
    cout << "Index 1 = " << vec.at(1) << endl;

    //printing the vector
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}