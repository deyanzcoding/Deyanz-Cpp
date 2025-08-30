// frind function in class

#include<iostream>
using namespace std;
class demo
{
int a,b;
public:
void getData();
friend int sum(demo);	
};
void demo :: getData()
{
	cout<<"Enter 2 Numbers : ";
	cin>>a>>b;
}
int sum(demo aa)
{
	return (aa.a+aa.b);
}
int main(){
demo aa;
aa.getData();

cout<<"Addition="<<sum(aa);
return 0;

	return 0;
}
