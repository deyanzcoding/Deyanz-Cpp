// destructor experiment

#include <iostream>
using namespace std;

class temp {
	
	public:
		temp () {
			cout << "I am constructor..." << endl;
		}
		
		void add() {
			int n1, n2, add;
			cout << "Enter two numbers :: ";
			cin >> n1 >> n2;
			
			add = n1 + n2;
			cout << "Addition of two numbers :: " << add << endl;
		}
		
		void sub() {
			int n1, n2, sub;
			cout << "Enter two numbers :: ";
			cin >> n1 >> n2;
			
			sub = n1 - n2;
			cout << "Subtraction of two numbers :: " << sub << endl;
		}
		
		~temp() {
			cout << "I am destructor...";
		}
};

int main() {
	
	temp obj;
	obj.add();
	obj.sub();

return 0;
}





/*	Conclusion :: 
				"We can make multiple functions and constructors, then if we created destructor it well executed 
				at last and de-allocated all memory."
				*/
