// Read file 

#include<iostream>
#include<fstream>
using namespace std;

int main(){

string myData;
//for read we use 'ifstream'
ifstream file1("deyan1.txt");

file1 >> myData;
/*cout << myData;  //only print 1 word
	so we can use 'getline' function.
	syntex : getline (file_variable, storing_variable)
*/

getline (file1, myData);
cout << myData;


return 0;
}
