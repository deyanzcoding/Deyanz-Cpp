#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void add();       //1
void sub(); 	  //2
void mul();       //3
void div();		  //4
void power();     //5
void fact();      //6
void squ();       //7
void cube();      //8
void squ_root();  //9
void sin_teta();  //10
void about();     //11

int main() {
	cout<<"\t\t ********** Wellcome to Scientific Calculator **********"<<endl;
	cout<<"\n Select Any One:"<<endl<<endl;
	cout<<"Addition :----------1"<<endl;
	cout<<"Subtraction :-------2"<<endl;
	cout<<"Multiplication :----3"<<endl;
	cout<<"Division :----------4"<<endl;
	cout<<"Power :-------------5"<<endl;
	cout<<"Factorial :---------6"<<endl;
	cout<<"Square :------------7"<<endl;
	cout<<"Cube : -------------8"<<endl;
	cout<<"Square Root :-------9"<<endl;
	cout<<"Sin :---------------10"<<endl;
	cout<<"About :-------------11"<<endl;

	int choice;

	while(1) {





		cout<<"\nEnter Your Choice : ";
		cin>>choice;

		switch(choice) {
			case 1:
				add();
				break;

			case 2:
				sub();
				break;

			case 3:
				mul();
				break;

			case 4:
				div();
				break;

			case 5:
				power();
				break;

			case 6:
				fact();
				break;

			case 7:
				squ();
				break;

			case 8:
				cube();
				break;

			case 9:
				squ_root();
				break;

			case 10:
				sin_teta();
				break;

			case 11:
				about();
				break;

			case 0:
				exit(0);
				break;

			default:
				cout<<"Invalid Selection!! \a"<<endl;
		}

	}

	return 0;
}

void add() {
	cout<<"Enter Two No (with space): ";
	int a,b;
	cin>>a>>b;
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}

void sub() {
	cout<<"Enter Two No (with space): ";
	int a,b;
	cin>>a>>b;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
}

void mul() {
	cout<<"Enter Two No (with space): ";
	int a,b;
	cin>>a>>b;
	cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}

void div() {
	cout<<"Enter Two No (with space): ";
	int a,b;
	cin>>a>>b;
	cout<<a<<" / "<<b<<" = "<<(float)a/(float)b<<endl;        //type casting;
}

void fact() {

//n!= n(n-1)(n-2)....3*2*
//4!=4*3*2*1=24;
//0!=1;

	int n;
	cout<<"Enter No : ";
	cin>>n;
	int fact=1;
	for(int i=1; i<=n; i++) {
		fact=fact*1;
	}
	cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}

void power() {
	//6^2 = 6*6 = 36
	//pow(b,e);
//***pow(base,exponent)***
	//pow(6,4);
	cout<<"Enter Base & Exponent :";
	double b,e;
	cin>>b>>e;

	double power;
	power = pow(b,e);            // in pow() function always puts only double value;
	cout<<"Power of Base "<<b<<" and Exponent "<<e<<" is "<<power<<endl;
}

void squ() {
	//n^2 = n*n;
//e.g: 4^2 => 4*4 =>16;
//e.g: 5^2 => 5*5 =>25;

	cout<<"Enter No (for square) : ";
	double a;
	cin>>a;

	cout<<"Square of "<<a<<" is "<<pow(a,2)<<endl;

}

void cube() {
	//n^3 = n*n*n;
//e.g: 4^3 => 4*4*4 => 64;
//e.g: 5^2 => 5*5*5 => 125;

	cout<<"Enter No (for cube) : ";
	double a;
	cin>>a;

	cout<<"Cube of "<<a<<" is "<<pow(a,3)<<endl;

}

void squ_root() {
	cout<<"Enter No(for square_root) : ";
	double a;
	cin>>a;
	cout<<"Square Root of "<<a<<" is "<<sqrt(a)<<endl;
}

void sin_teta() {
	cout<<"Enter No(for sin teta) : ";
	double a;
	cin>>a;
	cout<<"Sin("<<a<<") = "<<sin(a);
}

void about(){
	cout<<"\n\n My Name is Deyan Ahmad. And I am from Pirsaddo. \nI am reading in 2nd Year in PGC. And I want to dedicated \nThis Project(calculator) to my best teacher \"ASLAM SIR\". I also \nupdate it.And this calclulator is free for any one so it means that \nit is completely freeware.\n\t\3\3\3\3\3\3\3\3\3\3\3\3\3  \n"<<endl;
}




