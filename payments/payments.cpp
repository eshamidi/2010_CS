//payments lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>
#include <stdlib.h>
#include <iomanip.h>

void loanAnalyze ();
void investAnalyze ();
main()
{
	cout<<"*C++ Payment Analysis*"<<endl<<endl;
	cout<<"Press 1 for loan analysis or 2 for investment analysis."<<endl;
	cout<<"Press 0 to exit."<<endl;
	int select;
	cin>>select;
	if (select==1)
	loanAnalyze ();
	else if (select==2)
	investAnalyze ();
	return 0;
}
void  loanAnalyze ()
{	double num1, num2, num3, num4=1; 
	cout<<"Enter in the data for your loan."<<endl;
	cout<<"Principal:";
	cin>>num1;
	cout<<"\nAnnual Interest Rate:";
	cin>>num2;
	cout<<"\nMonthly Payment:";
	cin>>num3;
	cout<<"Month\t"<<"Principal\t"<<"Interest\t";
	cout<<"Payment\t"<<"New Balance\t"<<endl<<endl;
	int month=1;
	double interestRate=num2/1200;
	double totalInt=0;
	do 
	{
	cout<<month<<"\t"<<num1<<"\t\t"<<(num1*interestRate)<<"\t\t"<<num3<<"\t"<<( num1+ num1*interestRate-num3)<<endl;
	num1+= num1*interestRate-num3;
	month++;
	totalInt+=(num1*interestRate);


	} while (num3<=num1);
	cout<<"\n\nTotal interest paid to bank: "<<totalInt<<endl;


}
//display money correct to two decimal places: -2

void investAnalyze () // +4
{
	double amtinv, bigbucks, cashmoney, dollabills;
	cout<<"Enter in the data for your investment."<<endl;
	cout<<"Amount of Investment:";
	cin>>amtinv;
	cout<<"\nAnnual Rate of Return:";
	cin>>bigbucks;
	cout<<"\nMonthly Principal Addition:";
	cin>>dollabills;
	cout<<"\nLength of Investment (in months):";
	cin>>cashmoney;
	double interestRate=bigbucks/1200;
	double totalInt=0;
	int month=1;
	cout<<"Month\t"<<"Principal\t"<<"Interest\t";
	cout<<"Investment\t"<<"New Balance\t"<<endl<<endl;
	do 
	{
	cout<<month<<"\t"<<amtinv<<"\t\t"<<(amtinv*interestRate)<<"\t\t"<<dollabills<<"\t\t"<<( amtinv+ amtinv*interestRate+dollabills)<<endl;
	amtinv+= amtinv*interestRate+dollabills;
	month++;
	totalInt+=(amtinv*interestRate);


	} while (month<=cashmoney);
	cout<<"Total capital gains on investment: "<<totalInt<<endl;
}