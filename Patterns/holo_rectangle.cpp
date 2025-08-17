#include <iostream>
using namespace std;
int main () {

    int row, col;
    cout << "Enter rows : " << endl;
    cin >> row;
    cout << "Enter col : " << endl;
    cin >> col;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            if (i==1 || j==1 || i==row || j==col) {
                //1st iteration -> i alway equal to 1, so top border print (i==1)
                //2nd line      -> i != 1, but j is == to 1 so if condition print, then else print and atlast (j==col)
                //similarly ---- 
                //last line     -> (i != 1), (j != 1),but (i==row) so print all iteration on this condition.
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}