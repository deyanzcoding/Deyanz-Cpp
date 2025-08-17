// program to convert decimal number into binary 

#include <iostream>
using namespace std;

int dec2Binary(int decNum) {
    int ans = 0, pow = 1;

    while (decNum > 0) {
    int rem = decNum % 2;
    decNum = decNum / 2;

    ans = ans + (rem * pow);
    pow = pow * 10;
    }

    return ans; //binary form
}

int main() {
    int n;  
    cout << "Enter any number(convert into binary) : ";
    cin >> n;

    cout << "Answer : " << dec2Binary(n); 



//printing all decimal-2-binary numbers from 0 to n
    // for (int i = 0; i<=n; i++) {
    //     cout << dec2Binary(i) << endl;
    // }

return 0;
}