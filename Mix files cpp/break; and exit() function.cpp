// experiment of break; & exit() function.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){



for(int i=0; i<=10; i++){

	if(4>3){
		cout<<"hello world"<<'\n';
	}else{
		break;
	}
	
	
	cout<<"Deyan \nAhmad";
	break;
	cout<<"hassnain ali khan";  //well not print.
}

//use of coplix :
/*for(int i=0; i<=10; i++){
	cout<<"Enter any number :"<<endl;
	cout<<"Deyan \n Ahmad";
	exit(0);
	cout<<"hassnain ali khan";  //well not print.
}
 	cout<<"hassnian ali khan";
 	
 */	
 	
   //use of simple exit()
/*
cout<<"Enter any value : "<<endl;
exit(0);
cout<<"deyan";
cout<<"\n ahmad";
*/
	return 0;
}
