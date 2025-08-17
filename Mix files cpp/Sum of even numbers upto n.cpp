// print sum of even number upto 'n'

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter any number : "<<endl;
cin >> n;

int i = 2;
int sum = 0;

while(i<=n){
	
	if(i%2 == 0)
		sum = sum + i;
	i++;
}

cout<<"Sum from 2 to "<<n<<" is "<<sum<<endl;


return 0;
}
