//Q.No(5):- Write down a C++ program to find the number of elements in array using sizeof() operator.

#include<iostream>
using namespace std;
int main()
{
int a[]={0,1,2,3,4,5};                         

cout<<"Size of Array = "<<sizeof(a)<<" Bytes";   //  1 int=4 bytes, so 6x4 bytes= 24 bytes
int total_elements;
total_elements=sizeof(a)/sizeof(a[0]);    

/*As size of array a[] are 24 bytes,and size of element a[0] is 4,
so 24/4 = 6 bytes. */

cout<<"\nTotal number of elements in the array A are : "<<total_elements;


return 0;
}
