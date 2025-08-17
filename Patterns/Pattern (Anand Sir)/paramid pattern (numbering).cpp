/*numbering flep paramid:
		1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/


#include<iostream>
using namespace std;

int main(){

int n;
int i,j,k;

cout << "Enter any number : " << endl;
cin >> n;

for(i=1; i<=n; i++){
	for(j=1; j<=n-i; j++){
		cout<<" ";
	}
	for(k=1; k<=i; k++){
		cout<<k;
	}
	cout<<endl;
}



return 0;
}
