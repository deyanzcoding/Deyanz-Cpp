//Qs.no.6:- write a C++ program using while loop that takes an integer for a variable n value , and returns the sum of all the numbers from 1 to nvalue.

#include<iostream>
using namespace std;
int main()
{
int n,c=1,sum=0;
cout<<"Enter Integer : "<<endl;
cin>>n;

while(c<=n)
{
	sum=sum+c;
	c++;
}

cout<<"Sum of Integer from 1 to "<<n<<" = "<<sum;

return 0;
}
