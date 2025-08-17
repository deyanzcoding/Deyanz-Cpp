// all about pair in cpp
// create vector value as pair's & access it

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // pair<int, int> p = {1, 5};
    // pair<int, string> p1 = {12, "Deyan"};
    // pair<int, pair<int, char>> p2 = {12, {1, 'm'}}; //we can make pair of pair

    // cout << p.first << " ";
    // cout << p.second << endl;

    // cout << p1.first << " ";
    // cout << p1.second << endl;

    // cout << p2.first << " ";
    // cout << p2.second.first << " ";
    // cout << p2.second.second << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    vec.push_back({4,5});   //insert
    vec.emplace_back(4,5);   //in-place objects create

    // for (pair<int, int> p : vec)
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}