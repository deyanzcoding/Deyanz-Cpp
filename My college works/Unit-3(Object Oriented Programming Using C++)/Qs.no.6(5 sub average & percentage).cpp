#include<iostream>
using namespace std;
int main() {

	float cs,maths,phy,eng,urdu;
	float average,per,obtain;

	cout<<"Enter marks of cs : ";
	cin>>cs;
	cout<<"Enter marks of maths : ";
	cin>>maths;
	cout<<"Enter marks of phy : ";
	cin>>phy;
	cout<<"Enter marks of eng : ";
	cin>>eng;
	cout<<"Enter marks of urdu : ";
	cin>>urdu;

	//total(obtain marks)=paper1+paper2+paper3+........
	obtain=cs+maths+phy+eng+urdu;

	//average=total/number of items(papers).
	average=obtain/5;

	//percentage=(Obtain marks/Total marks)*100.
	per=(obtain/500)*100;     //every paper marks is 100,so total marks will be 500.

	cout<<"\n Average = "<<average;
	cout<< "\n Percentage = "<<per<<"%";
	return 0;
}
