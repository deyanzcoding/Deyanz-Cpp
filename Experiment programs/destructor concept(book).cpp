//destructor program

#include<iostream>
using namespace std;
class demo{
	int a=0;
	
	public:
		demo(){
			cout<<"I am constructor!!"<<endl;
			a++;
			cout<<"a="<<a<<endl;     //here a becomes 1 by increment.
		}
		~demo(){
			cout<<"I am destructor!!"<<endl;
			a--;
			cout<<"a="<<a<<endl;    //then here a become 0 by decrement.
		}
	/* First of all, constructor called and print all in them,
	then destructor called and print all of them & also destroy that object.*/
	
};
int main(){

demo dd; // it well call 1st constructor then call destructor to destroy object and decriment the value of a.

return 0;
}
