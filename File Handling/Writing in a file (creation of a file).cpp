// inputting characters until 'q' not press

#include<iostream>
using namespace std;

int main(){

FILE *fp;
char c;

fp = fopen ("typing.txt", "w");
cout << "Keep typing characters untill q not pressed : ";
c = getchar();
while (c != 'q') {
	fputc (c, fp);
	c = getchar();
}

fclose (fp);

return 0;
}
