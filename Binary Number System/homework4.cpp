// program to reverse any given number. 

#include <iostream>
using namespace std;

    int letReverse(int revNum) {
        int ans = 0;
        while (revNum > 0) {
            int rem = revNum % 10;
            ans = (ans * 10) + rem;
            
            revNum /= 10;
        }
        return ans;
    }

int main() {
    int n;
    cout <<"Enter any number : ";
    cin >> n; 

    cout << "Reverse of given number is : " << letReverse(n);

return 0;
}