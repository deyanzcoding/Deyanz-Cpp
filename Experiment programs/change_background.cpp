// CHANGE COLORS: 
  

#include <iostream>
using namespace std;



int main() {
    system("color 32");
    system("color 37");
    system("color f2");


return 0;
}

/*
  "Sets the default console foreground and background colors."   

COLOR [attr]
  attr ---> Specifies color attribute of console output 

Color attributes are specified by TWO hex digits -- the first
corresponds to the background; the second the foreground.  Each digit
can be any of the following values:

    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White */