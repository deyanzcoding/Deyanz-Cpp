//string sorting 

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
string s1 = "sdklfjskdlfjsdlkfjzzda";

cout<<"string unsorted : "<< s1<<endl;
sort(s1.begin(), s1.end());

cout<<"string after sorting (accending order) : "<<s1<<endl;
	return 0;
}
