//   Qs.(4):Write a program with a function that takes two int parameters, adds them together and then returns the sum.

#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum=a+b;
	return sum;
}

int main()
{
	int n,m;
	cout<<"Enter Two No(with space) : ";
	cin>>n>>m;

cout<<add(n,m);      // call the add() function;

return 0;
}
