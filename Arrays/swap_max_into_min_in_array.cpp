// program to swap min integer into max

#include <iostream>
using namespace std;
void swapMin2Max(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int temp;
    int indexS, indexL;
    for (int i = 0; i < size; i++)
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
    }
    // swapp
    temp = arr[indexS];
    arr[indexS] = arr[indexL];
    arr[indexL] = temp;
}

int main()
{
    int arr[5] = {12, 13, -14, 0, -16};
    swapMin2Max(arr, 5);

    // printing array:
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}