/* Multi-Level Inheritence
e.g:-     A-->base
		  B-->child of A
		  C--child of B (and B is also child of A)


*/
#include<iostream>
using namespace std;
class A{
	protected:
		int sub1;
	
	public:
		void subject1(){
			cout<<"Enter Subject 1 marks : "<<endl;
			cin>>sub1;
		}
};

class B:public A{    //class A publically inherited by B.
	protected:
		int sub2,sub3;
		
	public:
		void subject2(){
			cout<<"Enter Subject 2 marks : "<<endl;
			cin>>sub2;
		}
		void subject3(){
			cout<<"Enter Subject 3 marks : "<<endl;
			cin>>sub3;
		}
	
	
};

class C: public B{
	private:
		int average;
	
	public:
		void output(){
			average = (sub1 + sub2 + sub3)/3;
			cout<<"Average of 3 subjects are : "<<average<<endl;
		}
};

int main(){

	C aa;
	aa.subject1();
	aa.subject2();
	aa.subject3();
	aa.output();
 

return 0;
}
