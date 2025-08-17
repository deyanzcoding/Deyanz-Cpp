//class experiment program

#include<iostream>
using namespace std;
class deyan{
	
int a,b;
public:
	
void getData();
void putData();
		
};
int main(){

deyan dd;
dd.getData();
dd.putData();


return 0;
}

void deyan :: getData(){
	cout<<"Enter 1st number : "<<endl;
	cin>>a;
	cout<<"Enter 2nd number : "<<endl;
	cin>>b;
}	

void deyan :: putData(){
	int sum = a+b;
	cout<<"sum of "<<a<<","<<b<<" is :"<<sum;
}