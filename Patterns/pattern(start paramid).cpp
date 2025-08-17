/*Star Paramid
     *
    * *
   * * *
  * * * * 
  * * * *
   * * *
    * *
     *      */
#include<iostream>
using namespace std;
int main(){
int n;
 cout<<"Enter any number : ";
 cin>>n;
 
 for(int i=1; i<=n; i++){   //this loop is for row of upper paramid
 	for(int j=1; j<=n-i; j++){  // this loop is for to print num of spaces for each row.
 		cout<<" ";
	 }
	 for(int k=1; k<=2*i-1; k++){  // k = 2*1-1=1, 2*2-1=3;
	 	cout<<"*";
	 }
	 cout<<endl;
 }
 
for(int i=n; i>=1; i--){   //this loop is for row of upper paramid
 	for(int j=1; j<=n-i; j++){  // this loop is for to print num of spaces for each row.
 		cout<<" ";
	 }
	 for(int k=1; k<=2*i-1; k++){
	 	cout<<"*";
	 }
	 cout<<endl;
 }


	return 0;
}
