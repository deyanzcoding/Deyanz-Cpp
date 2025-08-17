// entring names of users in a file

#include<iostream>
#include<fstream>
using namespace std;
class user {

	public:

		string username;

		void enterName() {
			cin >> username;
		}
	

};
int main() {

	user uu[5];

		ofstream file("username.txt");
		
	for(int i=0; i<5; i++) {
		cout<< "Enter the name : " << endl;
		uu[i].enterName();
		file <<  uu[i].username << endl;
	}
		
	




	return 0;
}
