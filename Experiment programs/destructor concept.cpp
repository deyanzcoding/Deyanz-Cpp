// Destructor concept:

#include<iostream>
using namespace std;
int count = 0;
class demo {
	public:
		demo() {
			count++;
			cout<<"No of object constructed : "<<count<<"\n";
		}

		~demo() {
			cout<<"No of object destructed : "<<count<<"\n";
			count--;
		}


};
int main() {

	demo aa,bb,cc;
	{
		demo dd;
	}
	return 0;
}
