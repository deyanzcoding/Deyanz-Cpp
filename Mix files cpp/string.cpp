// string, character_array 

#include <iostream>
using namespace std;

int main() {
    char str[] = "Deyan Ahmad";
    int len = 0;
    // cout << "Enter your name : " ;
    // // cin >> str;
    // cin.getline(str, 100);

    //[printing the string]
    // cout << "Output : " << str << endl;

    for(char ch : str) {
        cout << ch << " ";
    }

    //calculating length of the string
    for(int i=0; str[i] != '\0'; i++) 
        len++;
    cout << "\nlength : " << len << endl;

return 0;
}