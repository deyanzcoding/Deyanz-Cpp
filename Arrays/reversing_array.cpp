// program to reverse the given array

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArr(arr, 10);

    cout << "Reverse of given array = " ;
    for (int  i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}