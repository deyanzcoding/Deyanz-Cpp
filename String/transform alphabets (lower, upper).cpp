// transform upper into lower & lower into upper.

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
string s = "abcdefghijklmnopqrstuvwxyz";

transform(s.begin(), s.end(), s.begin(), ::toupper);
cout<< s <<endl;

transform(s.begin(), s.end(), s.begin(), ::tolower);
cout<< s <<endl;

	return 0;
}
