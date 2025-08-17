// program to convert binary to decimal 

#include <iostream>
using namespace std;

int binary2Decimal(int binNum) {
    int ans = 0, pow = 1;
        while (binNum > 0) {
            int rem = binNum % 10;      //to get remainder(last digit)
            ans = ans + (rem * pow);

            //updation
            binNum = binNum / 10;
            pow = pow * 2;
        }
    return ans;
}

int main() {
    int n;
    cout << "Enter any number(to convert into decimal) : " ;
    cin >> n;

    cout << "Ans = " << binary2Decimal(n);
    

return 0;
}