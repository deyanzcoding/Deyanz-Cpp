#include<fstream>
#include<iostream>
using namespace std;

int main(){
	
ofstream file("My File.txt");  //Creating a file.

file<<"I save this text in My File.txt !!";  //Save some text in created file.
file.close();
	return 0;
}   
