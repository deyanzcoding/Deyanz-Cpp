// bit-wise conversion

#include<iostream>
using namespace std;

int main(){

int n = 10;

cout << (n<<1) << endl;   // 10*2 = 20
cout << (n>>1) << endl;   // 10/2 = 5

int n1 = 8;
cout << (n & n1) << endl;
cout << (n | n1) << endl;


return 0;
}
