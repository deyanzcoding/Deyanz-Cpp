//Pattern

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int row, col;

cout<<"Enter number of Rows : "<<endl;
cin>>row;

cout<<"Enter number of Col : "<<endl;
cin>>col;

/*Here 1st outer loop run at 1st iteration,then run inner loop and complete it's all iteration then outer loop iteration update with other number,then similarly
run inner loop again complete.and so on.*/

for(int i=1; i<=row; i++){
	for(int j=1; j<=col; j++){
		cout<<" * ";

	}
	cout<<endl;
}

	return 0;
}
