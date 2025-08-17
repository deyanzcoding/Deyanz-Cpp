//continue statement:
// to stop specific iteration in loop 


#include<iostream>
using namespace std;

int main(){

int i=0;
while(i<=10){
	i++;
	
	if(i == 5)
		continue;
	
	cout<<"\n"<<i;
}


return 0;
}
