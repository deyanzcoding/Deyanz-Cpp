//string char access, clear string, compare.

#include<iostream>
using namespace std;

int main(){
string s1 = "Deyan Ahmad";
string s2 = "abc";
string s3 = "xyz";


//if we want to access char n form s1.
cout<<"5th character of s1 : "<<s1[4]<<endl;

//if we want to clear s1 characters.
s1.clear();
cout<<s1;

//if we want to check as s1 as empty or not.
s1.clear();
if(s1.empty()){
	cout<<"s1 is empty string!!"<<endl;
}

//if we compare two strings.   
/*
it means if 1st string large give 1 as output.
		 if 2nd string large give -1 as output.
	 but if 1st & 2nd string is equal 0 as output.
*/
cout<<s2.compare(s3);

	return 0;
}
