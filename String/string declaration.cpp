//string declaration.

#include<iostream>
#include<string>
using namespace std;

int main(){
string str;

/*
string str1(5, 'd');
cout<<str1<<endl;
*/

/*
cout<<"Enter any string(name) : "<<endl;
cin >> str;
cout<<"You Entered : "<<str<<endl;
*/

/*
string str2 = "DeyanAhmad";
cout<<"Str2 = "<<str2;
*/

string str3;
cout<<"Enter a sentence : "<<endl;
// cin>>str3   => it will only print 1st word in the sentence.
getline(cin, str3);
cout<<"You entered : "<<str3;


	return 0;
}
