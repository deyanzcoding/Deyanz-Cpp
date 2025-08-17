/* Discount of some percentage in magamart.
Example: You have a shop of children toys and you give toys on 20 percent discount and 1Toy = 1000,
		 "Then after discount what will be the price of the toy?", so
		 discount = 1000(amount_of_toy) * 20(percentage_discount)/100(per_always_taken_in_100).  
*/
#include<iostream>
using namespace std;
int main(){
float amount, discount;
float per;

cout<<"Enter Purchasing Amount : "<<endl;
cin>>amount;

cout<<"Enter discount percentage : ";
cin>>per;

discount = (amount * per )/100;

cout<<"You entered : "<<amount<<" Rupees";
cout<<"\nAfter discount : "<<amount - discount<<" Rupees";



	return 0;
}
