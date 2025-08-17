// make greater number from int string  (234) == (432)

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

string s = "348490339";
cout<<"Unsorted : "<< s <<endl;

sort(s.begin(), s.end(), greater<int>());
cout<< "After sorted : "<< s <<endl;	

	return 0;
}
