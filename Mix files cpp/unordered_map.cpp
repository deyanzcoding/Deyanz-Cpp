// all about unordered map
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m.emplace("tv", 25);
    m.emplace("remote", 25);
    m.emplace("cars", 29);
    m.emplace("toys", 25);

    // m.erase(m.find("toys"));

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}