// program to find any unique number in an array 

#include <iostream>
using namespace std;

void uniqueVal(int arr[], int size) {
    bool isUnique = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {1, 2, 3, 1, 2, 3, 4, 5, 4, 4};
    uniqueVal(arr, 10); 
    

return 0;
}