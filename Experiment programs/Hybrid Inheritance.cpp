/*Hybrid Inheritence:
		"When we combine the concept of two or more then two basic inheritence type (single inheritene,multiple inheritance, multilevel inheritence
	then the new type of inheritence is called Hybrid inheritance.	
*/
#include<iostream>
using namespace std;
 class A{
 	public :
 		void putDataA(){
 			cout<<"i am in A";
		 }
 	
 };
 class B : public A{
 	
 	public:
 		void putDataB(){
 			cout<<"i am in B";
		 }
 };
 
 class C{
 	void putDataC(){
	 cout<<"i am in C";
	 }
 };
 class D : public A,public C
 {
 	void putDataD(){
	 cout<<"i am in D";
	 }
 };
int main(){

D dd;
dd.putDataA();
dd.putDataB();
dd.putDataC();
dd.putDataD();


return 0;
}
