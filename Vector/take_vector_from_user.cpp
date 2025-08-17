//  

#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector <int> vec (5);
    fill (vec.begin(), vec.end(), 7);
    for (int i : vec )
    {
        cout << i << " ";
    }
return 0;
}