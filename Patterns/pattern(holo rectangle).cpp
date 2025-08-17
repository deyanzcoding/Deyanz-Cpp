//pattern2

/*Here are two loops are use that 1st will run for row & 2nd run for column , and if ::
loop element (i = 1 or i = last) then print '*' Otherwise print ' '(space), so in first time row will be 1 at all time and col will update,
so the first row will print all but when ever the 1st loop update (i=2,3,....n-1) then their will be blank space print. Likewise col also. 	*/

#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"Enter row : ";
cin>>row;

cout<<"Enter col : ";
cin>>col;

for(int i=1; i<=row; i++){
	for(int j=1; j<=col; j++){
		if(i==1 || i==row)
		{
			cout<<" * ";
		}
		else if(j==1 || j==col)
		{
			cout<<" * ";
		}
		else
		{
			cout<<"   ";
		}
	}
	cout<<endl;
}

	return 0;
}
