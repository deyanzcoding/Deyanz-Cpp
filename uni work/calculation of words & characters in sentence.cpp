// program to count word and character in a sentence

#include<conio.h>
#include<iostream>
using namespace std;

int main(){

int ch_count = -1;
int wd_count = 1;

char ch;
cout << "Enter a sentence : ";
while (ch != '\r') {
	ch = getche();
	
	if (ch == ' ')
		wd_count++;
	else
		ch_count++;
}

cout << "\n\nCharacters = " << ch_count << endl;
cout << "Words = " << wd_count << endl;


return 0;
}
