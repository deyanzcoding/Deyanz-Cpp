/*QS.NO(8):- Write a C++ program to implementing a class with the name 'Time'. This class should have a constructor to initialize the Time,Hours,Minutes and 
seconds. The class should have another function named 'ToSecond()' to convert and display the time into seconds. */

#include<iostream>
using namespace std;

class Time {
	private :
		int hours,minutes,second,time;

	public :
		Time() {
			cout<<"Enter Hours : "<<endl;
			cin>>hours;
			cout<<"Enter Minutes : "<<endl;
			cin>>minutes;
			cout<<"Enter Seconds : "<<endl;
			cin>>second;
		}
		void ToSecond() {
			time=(hours*60*60)+(minutes*60)+second;         //to convert hours into second = (amount)hours * 60min * 60.
			cout<<"Total Seconds="<<time<<" sec";
		}
};


int main() {
	Time TT;
	TT.ToSecond();

	return 0;
}
