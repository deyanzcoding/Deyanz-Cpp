// concatenation of two or more strings

#include<iostream>
using namespace std;
class temp {
	public:
		// member function to concatenation
		void combine(char s1[], char s2[], char s3[], char res[]) {
			int i=0, r=0;
			for(i = 0; s1[i] != '\0'; i++, r++)
				res[r] = s1[i];
				
			for(i = 0;  s2[i] != '\0'; i++, r++)
				res[r] = s2[i];
			
			for(i = 0; s3[i] != '\0'; i++, r++)
				res[r] = s3[i];

			res[r] = '\0';
		}
};
int main() {
	temp tt;
	char str1[20], str2[20], str3[20];
	char res[80];

//input of three strings from user
	cout << "Enter 1st string : ";
	cin >> str1;
	cout << "\nEnter 2nd string : ";
	cin >> str2;
	cout << "\nEnter 3rd string : ";
	cin >> str3;

//object calling
	tt.combine(str1, str2, str3, res);

//after concatenation of inputed strings.
	cout << "\n\nAfter concatenation : " << res;


	return 0;
}
