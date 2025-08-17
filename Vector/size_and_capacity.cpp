// program to illustrate size & capacity of vector 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 12};
    vec.push_back(38);

    cout << "\nSize of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;

return 0;
}