/*
* * * * * * * * * *
  * * * * * * * *
    * * * * * *
      * * * *
    * * * * * *
  * * * * * * * *
* * * * * * * * * *

*/

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter rows :: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";

        for (int k = 0; k < (n + 3) - 2*i - 1; k++)
            cout << "* ";

        cout << endl;
    }
    for (int i = n - 2; i >= 0; i++) {

    }

    return 0;
}