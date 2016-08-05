//Loan Lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>
#include <stdlib.h>
#include <iomanip.h>
void dataEnter (int&, int&, int&, int& );
void calcInterest ( int&, int&, int&, int&);

main()
{
	//data entry. 
	int loanAmt, time, lowBall, ridic;
	cout<<"**Loan App by Esmail Hamidi**"<<endl<<endl;
	dataEnter (loanAmt, time, lowBall, ridic);
	calcInterest (loanAmt, time, lowBall, ridic);
	cout<<"\nProgram ended."<<endl<<endl;
	return 0;
}
void dataEnter (int &loanAmt, int  &time, int &lowBall, int &ridic)
{
	
	
	cout<<"Enter in the principal of your loan."<<endl;
	cin>>loanAmt;
	cout<<"Enter in the duration of the loan in years."<<endl;
	cin>>time;
	cout<<"Enter an interest rate percentage value in the low range."<<endl;
	cin>>lowBall;
	cout<<"Enter an interest rate percentage value in the high range."<<endl;
	cin>>ridic;
}

void calcInterest (int &loanAmt, int  &time, int &lowBall, int &ridic)
{	
	
	double rate;
	rate=lowBall;
	cout<<setiosflags (ios::right | ios::fixed | ios::showpoint);
	cout<<setprecision (2);
	cout<<setw (10) <<setw (15) <<endl;
	cout<<"Interest Rate"<<"   Monthly Payment"<<endl;
	//loop statement
		double p,k,n,c,a;
	
		
	while (rate<=ridic)
	{
		p=loanAmt;
		k= rate/12/100;
		n= time*12;
		c= pow (1+k, n);		
		a= (p*k*c)/ (c-1);
		cout<< setw (10) <<rate<< setw (15)<<a<<endl;
		rate+= .25;
	}
}
