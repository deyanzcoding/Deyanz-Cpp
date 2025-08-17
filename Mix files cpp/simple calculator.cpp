#include<iostream>
using namespace std;
int main(){

int num1, num2;
cout<<"Enter 2 numbers : ";
cin>> num1>> num2;

char op;
cout<<"Enter Operator : ";
cin>>op;


switch(op){
case '+':
	cout<<num1<< "+"<<num2<<" = "<<num1 + num2;
	break;
case '-':
	cout<<num1<< "-"<<num2<<" = "<<num1 - num2;
	break;
	case '*':
	cout<<num1<< "*"<<num2<<" = "<<num1 - num2;
	break;
	case '/':
	        	/*  here use of explicit type casting/conversion */
	cout<<num1<< "/"<<num2<<" = "<<float(num1) / float(num2);
	break;
		case '%':
	cout<<"Reminder of "<<num1<<" % "<<num2<<" = "<<num1 % num2;
	break;
	default:
		cout<<"Invalid Operator!!\a";
		break;
}



	return 0;
}
