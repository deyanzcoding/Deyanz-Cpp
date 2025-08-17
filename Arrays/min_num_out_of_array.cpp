// program to find min number in array

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {34, 2, 0, -3, 8};
    int smallest = INT_MAX; // means that we find smallest number, take whole_maximum integer, and then compare with them.
    int largest = INT_MIN;

    int indexS, indexL;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            indexS = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            indexL = i;
        }
        // we can use built-in function
        // smallest = min(arr[i], smallest);
        // largest = max(arr[i], largest);
    }

    cout << "Index(smallest) : " << indexS << endl;
    cout << "Index(largest) : " << indexL << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}