// program to understand sub array

#include <iostream>
using namespace std;

int main() {
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};

//   for (int st = 0; st < n; st++) {
//     for (int end = st; end < n; end++) {
//       for (int i = st; i <= end; i++) {
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

  return 0;
}

/*OUTPUT:
1         
1 2       
1 2 3     
1 2 3 4   
1 2 3 4 5 
2       
2 3     
2 3 4   
2 3 4 5 
3       
3 4
3 4 5
4
4 5
5
*/