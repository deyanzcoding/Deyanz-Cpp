#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main() {
array<int, 5 > n;

// initialize elements of array n to O
for ( size_t i = 0; i < n.size(); i++)
    n[i] = 0;

// set el ement at location i to O
cout << "Element" << setw(13) << "Value" <<  endl ;

// output each array element's value
for ( size_t j = 0; j < n.size(); j++ )
cout << setw( 7 ) << j << setw(13) << n[j] << endl;

return 0;
} // end main