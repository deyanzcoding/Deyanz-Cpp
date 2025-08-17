// program for vector demonstration

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector decleration
    vector<int> vec = {1, 3, 4, 5, 6, 4};

    // vec.push_back(98);
    // vec.push_back(98, 78);  
    // vec.pop_back();

    for (int i : vec) {
        cout << i << " " ;
    }

//push_back
 vec.push_back(98);

    cout << endl;
   for (int i : vec) {
        cout << i << " " ;
    }

//pop_back
    vec.pop_back();
    cout << endl;

       for (int i : vec) {
        cout << i << " " ;
    }




    return 0;
}