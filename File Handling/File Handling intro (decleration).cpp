/* File Handling:
	"Use for handle file (create, update, delete ..)."
	"if we want to create file using c++  and then we want to write some note on them so we can easily can do using file handling.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){

ofstream file1("deyan.txt");   
/* now when i compile program .exe file create which is normally,
 but when i run the program .txt file will create & if there is 
 some editing occurs so well show. */

file1 << "Hello World";  



return 0;
}
