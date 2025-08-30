//Qs.no.(10):- Write a C++ program to input a character from the keyboard and display the message after testing whether it is Vowel or Consonant.

#include<iostream>
using namespace std;
int main() {
	char alph, vowel;
	cout<<"Enter Any Character : ";
	cin>>alph;

	switch(alph) {
		case 'a':
			cout<<"Vowel";
			break;
		case 'e':
			cout<<"Vowel";
			break;
		case 'i':
			cout<<"Vowel";
			break;
		case 'o':
			cout<<"Vowel";
			break;
		case 'u':
			cout<<"Vowel";
			break;

		default:
			cout<<"Contonant\a";
	}

//                   (OR)

	if(alph=='a') {
		cout<<"Vowel";
	} else if(alph=='e') {
		cout<<"Vowel";
	} else if(alph=='i') {
		cout<<"Vowel";
	} else if(alph=='o') {
		cout<<"Vowel";
	} else if(alph=='u') {
		cout<<"Vowel";
	} else {
		cout<<"Consonant\a";
	}
	return 0;
}
