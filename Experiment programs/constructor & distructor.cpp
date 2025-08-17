// constructor experiment

#include<iostream>
using namespace std;

class demo {
	
	public:
		demo () {
			cout << "Hello World constructor!!" << endl;
		}
		~demo() {
			cout << "Object Destroys" << endl;
		}
};

int main(){

demo d1, d2, d3, d4;
// yes it well print 4 times..


return 0;
}
