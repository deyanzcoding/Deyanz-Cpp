// program to compute string length

#include<iostream>
using namespace std;
class temp {

	public:
		int len(char str[]) {
			int i;
			for (i=0; str[i] != '\0'; i++);

			return i;
		}


};
int main() {

	temp tt;
	char s[80];

	cout<< "Enter string : ";
	cin >> s;

	cout<< "Length of string is : " << tt.len(s);


	return 0;
}
