//string concatensation

#include<iostream>
using namespace std;

int main(){
/*

char str1[15] = "Deyan ";
char str2[15] = "Ahmad";

cout << "Str1 = " << str1 << endl;
cout << "Str2 = " << str2 << endl; 

strcat(str1, str2);

cout << "\n\nAfter concatenation : " <<endl;
cout << "Str1 = " << str1 << endl;
cout << "Str2 = " << str2 << endl; 
*/


char s1[50], s2[50];
cout << "Enter First Name : ";
//cin >> s1;  // use for only 1 word after space nothing execute
cin.getline(s1, 50);

cout << "\nEnter Last Name : ";
cin.getline(s2, 50);

strcat(s1, s2);
cout << "After concatenation : S1 = " << s1 << endl;
cout << "S2 = " << s2 << endl;




return 0;
}
