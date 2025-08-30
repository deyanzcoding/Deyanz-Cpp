//Qs.No.12:- Write a C++ program to find sum of the values of a two dimensional array int Test[2][3] and display the result on the screen.

#include<iostream>
using namespace std;
int main()
{
int test[2][3]={ {1,2,3}, {2,3,4} };
int sum=0;   

for(int i=0; i<2; i++ ){   //0,1 for 2 rows.
   for(int j=0; j<3; j++) //0,1,2 for 3 columns.
   {
   	sum=sum+test[i][j];    
	 /* sum=0+test[0][0]  => sum=0+1 => sum=1,
	    then 
		sum=1+test[0][1] => sum=1+2 => sum=3,
		then
		sum=3+test[0][2] => sum=3+3 => sum=6,
		. . .
		sum=11+test[1][3] => sum=11+4 => sum=15. */
   }

}

cout<<"Sum of Given Array is : "<<sum<<endl;
return 0;
}
