//read text from file

#include<iostream>
using namespace std;

int main(){

FILE *fp;
char c;

cout << "The content is : " << endl;
fp = fopen ("typing.txt", "r");

while (!feof(fp)) {
	c = fgetc (fp);
	putchar(c);
}
fclose(fp);


return 0;
}
