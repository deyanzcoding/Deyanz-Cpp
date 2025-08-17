// program to figure out how to find if a number is power of 2 without any loop. 

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return ((n > 0) && (n & (n - 1)) == 0);
}

int main() {
    int n;
    cout << "Ente any number : " ;
    cin >> n;

    cout << isPowerOfTwo(n);

return 0;
}