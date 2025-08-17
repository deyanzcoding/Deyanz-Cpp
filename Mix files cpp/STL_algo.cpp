// all algorithms in STL
// sort();

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//if we wana to sort pairs using 2nd value of pair
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{
    int arr[5] = {5, 4, 2, 6, 1};
    vector<int> vec = {5, 4, 2, 6, 1};
    vector<pair<int, int>> vecP = {{5, 1}, {2, 1}, {4, 1}, {1, 1}};

    // sort(arr, arr + 5);
    // // sort(arr, arr+5, greater<int>());    //for decending order
    // sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(), greater<int>());    //for decending order
    // sort(vecP.begin(), vecP.end());

    //if we wana to sort pairs using 2nd value of pair
    // sort(vecP.begin(), vecP.end(), comparator);

    // for (auto val : arr)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // for (auto val : vec)
    // {
    //     cout << val << " ";
    // }
    cout << endl;

    // for (auto p : vecP)
    // {
    //     cout << p.first << " " << p.second;
    //     cout << endl;
    // }

    // //[reverse]
    // reverse(vec.begin(), vec.end());
    // for(auto val : vec) {
    //     cout << val << " ";
    // }

    // string str = "abc";
    // next_permutation(str.begin(), str.end());
    // prev_permutation(str.begin(), str.end());

    // cout << "next permutation : " << str << endl;
    // cout << "prev permutation : " << str << endl;

    //max and min element in an vector
    // cout << *(min(vec.begin(), vec.end()));

    // //binary_search
    // vector<int> vect = {0, 2, 4, 6, 8};
    // cout << binary_search(vect.begin(), vect.end(), 9);

    // count set bits
    int n = 15;
    long int n1 = 15;
    long long int n2 = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n1) << endl;
    cout << __builtin_popcountll(n2) << endl;

    return 0;
}