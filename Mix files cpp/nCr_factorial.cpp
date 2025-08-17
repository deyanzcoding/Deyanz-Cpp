/* program to find binomial coeficient 
    nCr = (n!/r!(n-r)!)
*/ 

#include <iostream>
using namespace std;

//calculating of factorial
int factorial(int n) {
    int fact = 1;

    for (int  i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int factN = factorial(n);
    int factR = factorial(r);
    int factNR = factorial(n-r);

    return factN / (factR * factNR);
}

int main() {
    int n, r;
    
    cout << "Enter value for n : ";
    cin >> n;
    cout << "Enter value for r : ";
    cin >> r;

    cout << "nCr = " << nCr(n, r) << endl;

return 0;
}








// #include <iostream>
// using namespace std;

// void binomialCo(int nn, int rr) {
//     // n!
//     int factN = 1;
//     for (int i = 1; i <= nn; i++) {
//         factN *= i;
//     }

//     // r!
//     int factR = 1;
//     for (int i = 1; i <= rr; i++)
//     {
//         factR *= i;
//     }

//     // (n-r)!
//     int nr = nn - rr;
//     int factNR;
//     for (int i = 1; i <= nr; i++)
//     {
//         factNR *= i;
//     }
    
//     // nCr [simple calculation]
//     int nCr;
//     nCr = (factN) / (factR * factNR);

//     cout << "Answer of given nCr = " << nCr << endl;
// }

// int main() {
//     int n, r;  
//     cout << "Enter value for n : ";
//     cin >> n;
//     cout << "Enter value for r : ";
//     cin >> r;

//     binomialCo(n, r);

// return 0;
// }