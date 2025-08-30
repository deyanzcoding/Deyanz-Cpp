//array in pointer

#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30};
cout<<*arr<<endl;

int *parr=arr;

for(int i=0; i<3; i++){
cout<<*parr<<endl;
parr++; 
}
return 0;
}
