// program to experiment either array is correctly 'call by reference' or meth 

#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    //in function
    cout << "In Function(change into double) : " ;
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[3] = {1, 2, 3};
    
    changeArr(arr, 3);

    //in main
    cout << "In Main : ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

return 0;
}

/*Conclusion : Array is implecitly pass-by-reference, means that it work on address and change in original
                decleration place.*/