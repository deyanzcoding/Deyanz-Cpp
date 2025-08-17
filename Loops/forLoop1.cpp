#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any Number : ";
cin>>num;

int sum = 0;
for(int counter=1; counter<=num; counter++)
{
	sum = sum+counter;
}
cout<<"Sum : "<<sum<<endl;;

	return 0;
}
