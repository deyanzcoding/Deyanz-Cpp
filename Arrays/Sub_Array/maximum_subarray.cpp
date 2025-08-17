// program to find maximum subarray in an original array

#include <iostream>
#include <vector>
using namespace std;

//kadane's algo
int maxSubarray(vector<int> &vec) {
    int currSum = 0, maxSum = INT16_MIN;

    for(int val : vec) {
        currSum += val;
        maxSum = max(currSum, maxSum);
    }

    if(currSum < 0) {
        currSum = 0;
    }
return maxSum;
}
int main()
{
    int n = 5;
    vector<int> vec = {1, 2, 3, 4, 5};

    // int maxSum = INT_MIN;
    // for (int st = 0; st < n; st++)
    // {
    //     int currSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << "Max Subarray sum = " << maxSum << endl;
    
    cout << "Max Subarray sum = " << maxSubarray(vec);
    return 0;
}