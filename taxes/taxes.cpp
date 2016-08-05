//Intro to math variables- 9/13

#include <iostream.h> 
#include <math.h> 
#include <stdlib.h>
#include <iomanip.h>
main()
{
	const double FED = .15;
	const double FICA = .08;
	const double STATE = .032;
	double hour;
	double rate;
	double gross;
	double aftertax;
	//Initial Input
	cout<< "How many hours have you worked?\n";
	cin>> hour;
	cout<< "What is your hourly pay?\n";
	cin>> rate;
	
	//Calcs
	double afterfed;
	double afterfica;
	double afterstate;

	gross= (hour*rate);
	afterfed= gross*FED;
	afterfica= gross*FICA;
	afterstate= gross*STATE;
	aftertax= gross-afterfed-afterfica-afterstate;

	//Output
	
	cout<< "\n\nYour results are as follows:\n\n";
	cout<< "Your gross pay before tax is $"<<gross<<"\n";
	cout<< "Federal tax deducts $"<<afterfed<<"\n"; 
	cout<< "FICA tax deducts $"<<afterfica<<"\n";
	cout<< "State tax deducts $"<< afterstate<<"\n";
	cout<< "That leaves you with a mere $"<<aftertax<<" to pay your bills.\n\n";


return 0;
}


// output formatting -2
// include your name in the header