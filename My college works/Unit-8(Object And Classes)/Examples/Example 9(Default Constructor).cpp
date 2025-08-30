//Default constructor

#include<iostream>
using namespace std;

class DCon
{
	public:
		int a,b,c;
		void multiply(int n,int m)   //we assign this var.. to anothers variables.
		{
			a=n;
			b=m;
			
			c=a*b;
}
};

int main()
{
DCon DD;

return 0;
}
