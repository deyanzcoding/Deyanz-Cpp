// File Handling

#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
ofstream write("test1.txt");   //for file creation  (And this file well save in those folder in which you save the current file.) we can change ; e.g(F:/----.txt)
write<<"I am Deyan.";   //typing anything in created txt file.
	
	
	return 0;
	
}
