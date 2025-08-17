#include <iostream>
using namespace std;
int main () {

        int row;
        cout << "Enter rows : " << endl;
        cin >> row;

        for (int i=1; i<=row; i++) {
            for (int j=0; j<=(row-i); j++) {
                cout << "*";
            }
            cout << endl;
        }


    return 0;
}