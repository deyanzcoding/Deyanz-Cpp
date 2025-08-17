#include<iostream>
using namespace std;

/* Do-while loop well run at least one time, 
   after it if condition true so well run again & agina but if condition false it well terminate*/

int main(){
int num;
cout<<"Enter any Number : "<<endl;
cin>>num;

do{
	cout<<num;
	cin>>num;
}while(num > 0);



	return 0;
}
