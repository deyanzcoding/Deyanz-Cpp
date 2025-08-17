/* Template in class :
	"it is use for replacing any word or datatype at current time."
	At bellow code T is behave like data_type which we can change in main() function.

*/
#include<iostream>
using namespace std;

// make tamplate (for data_type)
template<class T>
class calc {

	public:
		T a;   //like int a;
		T b;   // like int b;

		T add() {
			return a+b;
		}
		T sub() {
			return a-b;
		}
		
		calc(T n1, T n2){
			 a = n1;
			 b = n2;
		}

};
int main() {

calc<float> cc = calc<float>(12.3, 32.4);

cout << "Add : " << cc.add() << endl;   // if the method is return of other then void then print the function using 'cout'.
cout << "Sub : " << cc.sub();

	return 0;
}













