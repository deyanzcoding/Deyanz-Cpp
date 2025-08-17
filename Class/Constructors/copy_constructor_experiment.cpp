// copy constructor experiment (sir said that = is built-in-define) 

#include <iostream>
using namespace std;

class Demo {
    int x, y;

    public:
        Demo () {
            x = 10;
            y = 20;
        }

	void display() {
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
	
};


int main() {
    Demo aa;
    aa.display();
    
//	Demo bb(aa);
	Demo bb = aa;
	bb.display();

return 0;
}