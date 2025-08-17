

#include<iostream>
using namespace std;

int main(){

string str1 = "Hello";
string str2 = "World";
string str3, str4;

int len;

str3 = str1;
str4 = str1 + " " + str2;
len = str4.size();

cout << "str 1 = " << str1 << endl;
cout << "str 2 = " << str2 << endl;
cout << "str 3 = " << str3 << endl;
cout << "str 4 = " << str4 << endl;

cout << "Length of str4 = " << len;

return 0;
}
