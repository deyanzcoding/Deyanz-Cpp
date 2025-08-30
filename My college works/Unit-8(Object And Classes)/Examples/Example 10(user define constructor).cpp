// User-Define Constructor

#include<iostream>
using namespace std;

class cExample
{
	public:
		int a,b,c;
		void getData(int n,int m)
		{
			a=n;
			b=m;
		}
        int mul()
		{
			c=a*b;
			return c;
				}		
};

int main()
{

cExample cob;
cob.getData(2,3);
int result;

result = cob.mul();  //call mul function().
cout<<"Multiplication = "<<result;

return 0;
}
