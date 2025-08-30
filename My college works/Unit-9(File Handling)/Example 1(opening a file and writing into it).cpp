// Opening a file and writing into it.
//File Handling.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
string str;
ifstream read;  //ifstream for read the files.

read.open("Read.txt");
    getline(read,str);   //'like cin>>str'; but full line
    cout<<str;
	return 0;
}
