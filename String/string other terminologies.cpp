//other terminologies of string

#include<iostream>
using namespace std;

int main(){
// let's append(add) two strings
string s1 = "fam";
string s2 = "ily";

s1.append(s2);       // s1 update & becomes s1 + s2

cout<<"s1 becomes : "<<s1;
cout<<"\ns2 = "<<s2<<endl;   //s2 not change

/*
we can:
cout<<s1 + s2;   ==> alternative of s1.append(s2).
		or
s1 = s1 + s2;
cout<<s1;
*/

	return 0;
}
