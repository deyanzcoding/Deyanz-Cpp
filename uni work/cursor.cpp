// cursor pointer ratio finder

#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	char direction;
	int x = 10;
	int y = 10;

	cout << "Press Direction key to navigate your cursor (s, w, d, a) " << endl;
	cout << "Type Enter to quit . . . " << "\n\n";
	while (direction != '\r') {

		cout << "\t (x,y) = " << "(" <<  x << "," << y << ")" << endl;
		direction = getch();

		if (direction == 's')
			y--;
		else if (direction == 'w')
			y++;
		else if (direction == 'd')
			x++;
		else if (direction == 'a')
			x--;

	}


	return 0;
}
