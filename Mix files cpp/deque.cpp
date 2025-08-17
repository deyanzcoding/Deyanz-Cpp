//  program to demonstrate deque

#include <iostream>
#include <deque>
using namespace std;
int main() {
deque<int> d = {1, 2, 3, 4};

cout << "Size of deque : " << d.size() << endl;
for(int val : d) {
    cout << val << " ";
}


return 0;
}