#include <iostream>
using namespace std;
int main () {
    
    int n;
    cout << "Enter any number : " << endl;
    cin >> n;

    int count = 0;
    while (n > 0) {
        count++;
        n = n/10;
    }

    cout << "Total digit in given number is : " << count << endl; 

    return 0;
}