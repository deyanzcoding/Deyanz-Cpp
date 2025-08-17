// copying string.

#include<iostream>
using namespace std;
class temp {
	public:
	void cpystr (char s1[], char s2[]) {
			for(int i = 0; s1[i] != '\0'; i++) {
				s2[i] = s1[i];
				s2[i + 1] = '\0';
			}
		}
};
int main(){

//object creation
temp tt;

//decleratioin of variable
char s1[80], s2[80];

cout << "Enter string : ";
cin >> s1;
tt.cpystr(s1, s2);

//second string (s2) becomes
cout << "\nSecond string becomes : " << s2;

return 0;
}
