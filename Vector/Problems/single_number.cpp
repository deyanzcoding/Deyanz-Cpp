// program to print unique or single number from vector

#include <iostream>
#include <vector>
using namespace std;

int singleNumber1(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        bool foundDuplicate = false;

        for (int j = 0; j < vec.size(); j++)
        {
            if ((i != j) && (vec[i] == vec[j]))
            {
                foundDuplicate = true;
                break; // here 1 duplicate element well find of given vector
            }
        }

        if (!foundDuplicate) // foundDuplicate = false
            return vec[i];
    }
    return -1;
}

int singleNumber2(vector<int> &vec)
{
    int ans = 0;
    for (int i : vec)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};
    // method 1
    cout << "Unique or Single number is = " << singleNumber1(vec) << endl;
    // method 2
    cout << "Unique or Single number is = " << singleNumber2(vec) << endl;

    return 0;
}