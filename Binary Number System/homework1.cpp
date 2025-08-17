// program to figure out how to find if a number is power of 2 without any loop. 

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) 
        return false;
    else
        while(n > 1) {
            if (n%2 != 0) 
                return false;

            //updata n value
            n = n / 2;    
        }
        return true;
}

int main() {
    int n;
    cout << "Ente any number : " ;
    cin >> n;

   if (isPowerOfTwo(n)) {
    cout << "The number is power of 2..";
   } else {
    cout << "The number is not power of 2 !!\a";
   }


return 0;
}