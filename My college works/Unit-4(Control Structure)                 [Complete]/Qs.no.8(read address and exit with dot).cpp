//Qs.no.(8):- Write a C++ program to read the alphabet of a person and exit when the user enters dot(.) from the keyboard.

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main() {
	char alph[20],ch;
	do {

		cout<<"Enter Address of Person : ";
		cin>>alph;

		cout<<"\nContinue or Terminate:(press dot \".\") "<<endl;
		ch=getch();
	} while(ch!='.');
	return 0;
}
