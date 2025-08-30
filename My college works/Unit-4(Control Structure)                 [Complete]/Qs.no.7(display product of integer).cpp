/*Qs.no.(7):- Write a program that display the product components of a number without repeating them.
For example if the user enters 24, it displays 24*1, 12*2, 8*3 and 6*4 */

#include<iostream>
using namespace std;
int main()
{
int n,s=1;
cout<<"Enter Number(calculate product components) : "<<endl;
cin>>n;

cout<<"The product Components of "<<n<<" are : "<<endl;

for(int i=n; i>=3; i--)
for(int j=1; j<=n; j++)
{
	if(i*j==n)
	{
		cout<<i<<"x"<<j<<endl;
		s=j+i;
	}
}


return 0;
}
