// all about set 
// multiset
// unordered_set

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
    // set<int> s;
    // multiset<int> s;
    // unordered_set<int> s;
    unordered_multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    
    s.insert(2);    //duplicate well not be count
    s.insert(3);

    cout << "size : " << s.size() << endl;

    for (auto val : s) {
        cout << val << " ";
    }
return 0;
}