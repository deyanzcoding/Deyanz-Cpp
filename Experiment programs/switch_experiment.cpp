/*Experiment to check two character-at-a-time ??*/

#include <iostream>
using namespace std;
int main()
{

    char option;
    cout << "Enter any character :: " << endl;
    cin >> option;

    switch (option)
    {
    case 'a':
    case 'A':
        cout << "Good" << endl;
        break;
    case 'b':
    case 'B':
        cout << "Very-Good" << endl;
        break;
    case 'c':
    case 'C':
        cout << "Nice" << endl;
        break;
    default:
        cout << "Invalid !!\a";
    }

    return 0;
}
/*Conclusion :: we can choice more then 1 character as case like above..*/