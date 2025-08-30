//Reverse of the numbers

#include<iostream>
using namespace std;

class reverse
{
	int n;
	public:
		void getData();
		void putData();
};

void reverse :: getData(){
	cout<<"Enter No to find reverse : "<<endl;
	cin>>n;
}
void reverse :: putData(){
	int rev=0;
	while(n>0)
	{
		rev=(rev*10)+n % 10;
		n=n/10;
	}
	cout<<"\n Reverse = "<<rev;
}

int main()
{
reverse rr;
rr.getData();
rr.putData();

return 0;
}
