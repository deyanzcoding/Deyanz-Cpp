/* pass by reference
    ->pointer
    ->references(alias)

    
*/
#include <iostream>
using namespace std;

void changeX(int *ptr)
{
    *ptr = 200;
}

void changeY(int &y) {
    y = 600;
}

int main()
{
    //[1]- pass-by-reference through pointer
    int x = 100;
    cout << "Before X : " << x << endl;
    changeX(&x);
    cout << "After X : " << x << endl;

    //[2]- pass-by-reference through alias
    int y = 500;
    cout << "Before Y : " << y << endl;
    changeY(y);
    cout << "After Y : " << y << endl;
    return 0;
}