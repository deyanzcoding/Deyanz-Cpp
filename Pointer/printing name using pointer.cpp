// printing name using pointer

#include<iostream>
using namespace std;

int main(){

char name[20], *ptr;
cout << "Enter your name : " << endl;
cin.get(name, 20);
//cin >> name;  only 1 word

//ptr = *name;  //error because array ... 
ptr = name;
cout << "Your name is = " << ptr;

return 0;
}
