// prime or non-prime

#include<iostream>
using namespace std;

int main(){
int n;
//cout << 4%9 << endl;
cout<<"Enter any number : " << endl ;
cin >> n;

int i = 2;
while (i < n){
	if (n%i == 0){
		cout<< "non-Prime" << endl;
		
	}else{
		cout<<"Prime"<<endl;
	}
	i++;
}



return 0;
}
