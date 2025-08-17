#include <iostream>
using namespace std;
int main () {
    
    int r, c;
    cout << "Enter rows & col respectively : " ;
    cin >> r >> c;

    for (int i = 1; i <= r; i++) {
        if (i%2 != 0) {    // for odd line
            for (int j = 1; j <= c/2; j++){
                cout << "1 2 ";
            }
        } else {           // for even line
            for (int j = 1; j <= c/2; j++){
                cout << "2 1 ";
        }       
        }
        cout << endl;
    }



    return 0;
}