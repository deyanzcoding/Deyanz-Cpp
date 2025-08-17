// change all alpabets into upper or lower case characters.

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

string str = "adsdklfjsez";
string str1 = "SLDFKJSLDFJLKJEZ";

// difference b/w upper & lower case characters
//cout<< "a" - "A" <<endl; 


for(int i = 0; i<str.size(); i++){
	if(str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
}


for(int i = 0; i<str1.size(); i++){
	if(str1[i] >= 'A' && str1[i] <= 'Z')
	str1[i] += 32;
}

cout<<"String after capitalize : "<< str << endl;
cout<<"String after lower case : "<< str1 << endl;	
	
	return 0;
}
