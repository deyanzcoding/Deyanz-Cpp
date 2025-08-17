// erase & find & insert function in string.

#include<iostream>
using namespace std;

int main(){
string s1 = "Hacker.com";

//erase char
cout<<"s1 in original form : "<<s1<<"\n";
s1.erase(3, 2);
cout<<"s1 becomes(erase) : "<<s1<<endl;

//find char
cout<<"com start from(find) :"<<s1.find("com")<<endl;;  //index always start from 0.

//insert function
cout<<"After (insert) : "<<s1.insert(0, "www.");

//length/size function
cout << "\nsize function(): "<<s1.size() << endl;
cout << "length function(): "<<s1.length() << endl;	
	
	return 0;
}
