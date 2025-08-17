//struct in pointer

#include<iostream>
using namespace std;
struct temp {
	int i;
	float f;
	char c;
};
int main() {

	struct temp tt, *ptr;
	tt = {123, 1232.33, 'p'};

	ptr = &tt;

	cout << "\nSize of structure for int = " << sizeof (tt.i);
	cout << "\nSize of structure for float = " << sizeof (tt.f);
	cout << "\nSize of structure for char = " << sizeof (tt.c);

	cout << "\nValue at tt.i : " << tt.i << endl;
	cout << "Value at tt.f : " << tt.f << endl;
	cout << "Value at tt.c : " << tt.c << endl;  // why it can't use like tt->c

	return 0;
}
