// program to reverse any given number. 

#include <iostream>
using namespace std;

    void letReverse(int rev) {
        while (rev > 0) {
            int rem = rev % 10;
            cout << rem ;
            
            rev /= 10;
        }
    }

int main() {
    int n;
    cout <<"Enter any number : ";
    cin >> n; 

    cout << "Reverse of given number is : ";  letReverse(n);

return 0;
}