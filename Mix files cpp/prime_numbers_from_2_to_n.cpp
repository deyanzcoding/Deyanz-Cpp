// program to print prime numbers from 2 to n number

#include <iostream>
using namespace std;

class printPrime
{
public:
    bool isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    printPrime obj;
    int n;
    cout << "Enter any number : ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are : ";
    for (int i = 2; i <= n; i++)
    {
        if (obj.isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}