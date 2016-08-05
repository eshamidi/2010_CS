//Week 2 Lab: Making Change

#include <iostream.h> 

main () 

{
	double	purchaseAmount, cashPaid, temp;
	int		change;
	
	//Input Values
	cout << "What is the purchase amount?\n";
	cin >> purchaseAmount ;
	cout << "What is the cash tendered?\n";
	cin >> cashPaid;

	//Change Calculations 

	temp = cashPaid - purchaseAmount;
	cout <<"The total change is " <<temp <<"."<<endl;
	change = int (temp*100);
	cout << "Denominations:\n\n"; 
	
	//Dollars
	cout << "Dollars:" << change/100 <<endl;
	change = change%100;
	
	//Quarters
	cout << "Quarters:";
	cout <<  (change/25) <<endl;
	change = change%25 ;

	//Dimes
	cout << "Dimes:";
	cout << (change/10) <<endl;
	change = change %10;

	//Nickels 
	cout << "Nickels:";
	cout << (change/5) <<endl;
	change = change%5;

	//Pennies 
	cout << "Pennies:";
	cout << (change/1) <<endl;
	return 0;
}
//include your name!!!!