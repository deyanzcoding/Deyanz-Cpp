// Copying Strings

#include<iostream>
using namespace std;

class temp{
	
	public:
		void cpystr (char str1[], char str2[]) {
			
			for(int i = 0; str1[i] != '\0'; i++){
				str2[i] = str1[i];
				str2[i+1] = '\0'; 
			}
		}
	
};

int main(){

temp tt;
char s1[80], s2[80];

cout<< "String for s1 : ";
cin >> s1;

tt.cpystr(s1, s2);
cout << "Second String becomes s2 : " << s2;


return 0;
}
