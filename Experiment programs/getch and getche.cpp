//getch() and getche() experimant

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

char c;

//getch()
// character will not be showed when typing
cout << "Enter a character : " ;
getch();
c = getch();
cout << "\nYou entered : " << c;

//getche()
// character will be showed when typing
cout << "\nEnter a character : " ;
getche();
c = getche();
cout << "\nYou entered : " << c;

return 0;
}
