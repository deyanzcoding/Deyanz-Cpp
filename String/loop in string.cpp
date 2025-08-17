//string in loop

#include<iostream>
using namespace std;

int main(){
	
	string s1= "DeyanAhmad";
	
// to access string characters using loop	
	for(int i=0; i<s1.length(); i++)
		cout<<s1[i]<<endl;

// to retrive char from string
string s2 = s1.substr(6, 4);
cout<< s2 << endl;


// string to integer.
string s3 = "453";
int x = stoi(s3);    //string to integer
cout <<"s3 origional : "<< x << endl;
cout <<"s3 after integer : "<< x+7 << endl;

// integer to string.
int i1 = 100;
cout <<"interger into integer : "<< to_string(i1) + "5" <<endl;



	return 0;
}

