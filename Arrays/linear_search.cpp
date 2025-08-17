// program to demonstrate linear search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[10] = {1, 12, 3, 10, 20, 49, 90, 89, 32, 99};
    int target;

    cout << "Enter what you want to search : ";
    cin >> target;

    cout << linearSearch(arr, 10, target);

    return 0;
}