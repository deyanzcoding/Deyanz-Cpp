// pointer using struct inside another pointer use

#include<iostream>
using namespace std;
struct temp {
	int i;
	int *Iptr;
};
int main(){
temp tt;
int a = 10;

tt.i = a;
tt.Iptr = &a;

cout << "Value of a = " << tt.i << endl;
cout << "Address of a = " << tt.Iptr << endl;



return 0;
}
