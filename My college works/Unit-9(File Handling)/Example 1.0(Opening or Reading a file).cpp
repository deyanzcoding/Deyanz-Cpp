#include<fstream>
#include<iostream>
using namespace std;

int main(){
string str ;
	
ifstream readFile("My File.txt");  //Created file. || this file is present in current file save folder.

getline(readFile,str);  // (object_Name , string_Name);
cout<<str;

	return 0;
}   
