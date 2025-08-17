// array in pointer

#include<iostream>
using namespace std;

int main(){

char *nameptr[5] = {"Deyan", "Ahmad", "Dalil", "Danyal", "Hassnain"};
cout << "List of five names : " << endl;
for (int i = 0; i < 5; i++)
	cout << nameptr[i] << "\n";

return 0;
}
