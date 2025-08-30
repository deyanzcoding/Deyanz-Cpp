//Qs.no.(9):- Write a C++ program to find the transpose of a matrix A[3][3].

#include<iostream>
using namespace std;
int main()
{
int rows=3;
int col=3;
int m[rows][col]={ {1,2,3},{3,4,5},{5,6,7} };
int t[col][rows];

for(int i=0; i<rows; i++)
{
	for(int j=0; j<col; j++)
	{
		t[j][i]=m[i][j];
	}
}
cout<<"Matrics is :   "<<endl;
for(int i=0; i<rows; i++)
{
	for(int j=0; j<col; j++)
	{
		cout<<m[i][j]<<"  ";
	}
	cout<<endl;
}
cout<<"Transpose of Matrics is :   "<<endl;
for(int i=0; i<col; i++)
{
	for(int j=0; j<rows; j++)
	{
		cout<<t[i][j]<<"  ";
	}
	cout<<endl;
}

return 0;
}
