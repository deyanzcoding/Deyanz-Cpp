//copying of two strings

#include<iostream>
using namespace std;

int main(){

string str = "Welcome to C++ Program";
char x[50];

cout << "String = " << str << endl;

//string_name.copy(string_name, number_of_character, starting_index)
str.copy(x, 7, 0); 
// x is the variable in which values are copied from 0 to 6 (7 elements);

cout << "After copied : " << x << endl;

return 0;
}
