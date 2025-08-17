// program on car (project) oop

#include<iostream>
#include<string>
using namespace std;
class car{
	
	string model;
	float speed;
	int price;
	string color;
	
	public:
		car(string m, float s, int p, string c){
			
			model = m;
			speed = s;
			price = p;
			color = c;
		}
		
		void car_run(){
			cout << model <<" is running with speed of " << speed << "kph" << endl;
		}
		
		void distance(int dis){
			cout <<model << " will take " << dis/speed << " hours to cover " << dis << " kilometer" << endl;
		}
};
int main(){

car toyota("t1", 120, 3500, "white");
car bmw("b1", 180, 3900, "white");
car ferrari("f1", 220, 4300, "white");

toyota.car_run();
bmw.car_run();
ferrari.car_run();

toyota.distance(30);
bmw.distance(30);
ferrari.distance(30);

return 0;
}
