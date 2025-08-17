// program ton

#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	char direction = 'a';
	int x = 10, y = 10;

	cout << "Type enter to quite \n";
	while (direction != '\r') {
		cout << "Your location is = " << x << ", " << y << endl;
		cout << "Press direction key (n,s,e,w) ";
		direction = getche();

		if (direction == 'n')
			y++;
		else if (direction == 's')
			y--;
		else if (direction == 'e')
			x++;
		else if (direction == 'w')
			x--;

	}


	return 0;
}
