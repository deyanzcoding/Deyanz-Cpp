// constructor experiment.

#include<iostream>
using namespace std;
class demo {
	private:
		int x;
	public:
		demo(){
			cout<<"hello world";
		}


};
/*can be 
demo::demo(){
	cout<<"Hello World";
}
*/
int main() {

	demo dd;


	return 0;
}
