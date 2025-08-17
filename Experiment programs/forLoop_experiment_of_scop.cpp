#include <iostream>
using namespace std;
int main () {

    int i = 0;

    cout << "Inside Loop i = " << endl;
    for (int i = 1; i < 5; i++)
        cout << i << " ";

    cout << "\nOutside Loop i = " << i << endl;

    return 0;
}