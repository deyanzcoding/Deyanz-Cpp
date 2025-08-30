//maximum number out of four numbers.

#include<iostream>
using namespace std;

int main(){
int a,b,c,d;
cout<<"Enter 4 Numbers : "<<endl;
cin>>a>>b>>c>>d;

if((a>b) && (a>c) && (a>d))
{
	cout<<"\n Maximum Number = "<<a;
}
else if((b>a) && (b>c) && (b>d))
{
	cout<<"\n Maximum Number = "<<b;
}
else if((c>a) && (c>b) && (c>d))
{
	cout<<"\n Maximum Number = "<<c;
}
else
{
	cout<<"\n Maximum Number = "<<d;
}

	return 0;
}
