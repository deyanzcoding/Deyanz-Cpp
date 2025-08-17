#include <iostream>
using namespace std;
int main () {
    
    int row;
    cout << "Enter rows : " << endl;
    cin >> row;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            cout << (i+j-1) << " ";
        }
        cout << endl;
    }



    return 0;
}