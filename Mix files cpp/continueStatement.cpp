//Continue Stetment : is use to skip specific iteration in loop/condition.

#include<iostream>
using namespace std;
int main() {

//Ali can go only for tower at odd days;
	 

	for(int date=1; date<=30; date++) {
		if(date % 2 == 0) { // this is for even days.
			continue;
		}
		cout<<date<<") You can go Today!!"<<endl;
	}

	return 0;
}
