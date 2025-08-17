// maximum upto 3 numbers

#include<iostream>
using namespace std;

int main(){
	
int a,b,c, max;
cout << "Enter 3 numbers : " << endl;
cin >> a >> b >> c;

max = (a>b && a>c)?a : (b>a && b>c)?b : c;
cout << "Maximum in three numbers is : " << max;



return 0;
}
