// program to experiment is 'f' must be placed if we want to initialize float variable ?? 

#include <iostream>
using namespace std;

int main() {

    float PII = 3.14;    
    float PI = 3.14f;    

    // print
    cout << "PI = " << PI << endl;
    cout << "PII = " << PII << endl;

    //size
    cout << "Size of PI : " << sizeof(PI) << endl;
    cout << "Size of PII : " << sizeof(PII) << endl;
    
return 0;
}

// conclusion :- No, We can and not use 'f' at float value like above 
//              Our marziiii.