// clg book example

#include<iostream>
#include<string>
using namespace std;

int main(){

//string delearation
char question[] = "Please enter your name : ";
char greeting[] = "Hello, ";
char yourName[80];

//print of question, then answer
cout << question;
cin >> yourName;
cout << greeting << yourName << "!";

return 0;
}
