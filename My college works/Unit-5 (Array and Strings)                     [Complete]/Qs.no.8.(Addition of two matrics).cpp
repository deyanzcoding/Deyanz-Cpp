//Qs.No.8:-Write down a C++ program to find the subtraction and addition of two matrices A[3][3] and B[3][3].
//only addition of matrics.

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], sum[100][100], i, j;

    cout << "\t |Addition of 3 by 3 Matrics|"<<endl;
    
    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < 3; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < 3; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
            sum[i][j] = a[i][j] + b[i][j];  //a11+b11  ......  a33+b33. 

    // Displaying the resultant sum matrix.
    cout << endl << "Addition of two matrix is: " << endl;
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == 3 - 1)
                cout << endl;
        }

    return 0;
}