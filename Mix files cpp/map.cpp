// all about mapping

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map<string, int> m;
     multimap<string, int> m;

    // //inserting or change the value
    // m["tv"] = 100;
    // m["phones"] = 100;
    // m["headphones"] = 120;
    // m["laptop"] = 80;
    // m["laptop"] = 85;   //only one be count
    // m["watch"] = 50;

    // m.insert({"toys", 70});
    // m.emplace("trackters", 185); //no create any object

    // for(pair<string, int> p : m) {
    // for (auto p : m)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // cout << "\ncount : " << m.count("laptop") << endl; //either 0, 1
    // cout << "quantity inside laptop : " << m["laptop"] << endl;

    // erase the key from the map
    // m.erase("laptop");
    // for (auto p : m)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // if(m.find("camera") != m.end()) {
    //     cout << "found";
    // } else {
    //     cout << "not found" ;
    // }

    // cout << "size of map : " << m.size() << endl;
    // cout << "is empty : " << m.empty() << endl;

    // [multimap]
    m.insert({"camera", 25});
    m.insert({"camera", 50});
    m.insert({"camera", 95});
    m.insert({"camera", 109});
    m.emplace("tv", 89);
    
    m.erase(m.find("camera"));
    for(auto p : m) {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}

//experiment :

//[[not valid since map value are stored like pairs]]
    // while(!m.empty()) {
    //     cout << m.first << " " << m.second << endl;
    // }