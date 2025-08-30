//Qs.no.(7):- Write a C++ program to copying string using strcpy () function.

#include<iostream>
using namespace std;
int main()
{
string ss;
char cc[20];

ss="This is a string.";
strcpy(cc,"This is a string");
cout<<"ss = "<<ss<<endl;
cout<<"cc = "<<cc<<endl;

//            ( or )

//char s1[10],s2[10];
//cout<<"String s1 : ";
//cin>>s1;
//
//strcpy(s2,s1);
//cout<<"String s2 becomes : "<<s2<<endl;



return 0;
}
