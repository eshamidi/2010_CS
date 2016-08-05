//IRS Lab by Esmail Hamidi

#include <iostream.h> 
#include <stdlib.h> 
#include <math.h>

main()
{
	double income;
	int marriedStatus;
	double taxpay;
	//input stuff
	cout<<"Enter in your taxable income."<<endl;
	cin>>income;
	cout<<"Enter in 1 if single or 2 if filing jointly."<<endl;
	cin>>marriedStatus;

	//if statements 
	if (marriedStatus==1)
	{
	if (income >= 0 && income <= 24650 )
	taxpay= income* 0.15;
	else if (income > 24650 && income <= 59750)
	taxpay= 3697.0+ .28*(income- 24650 );
	else if (income > 59750  )
	taxpay= 13525.0+ .31*(income-59750);
	cout<<"\nIf you are single and your income is "<<income<<" dollars, \nthen you owe the IRS "<<taxpay<<" dollars."<<endl;
	}
	else if (marriedStatus==2)
	{
	if (income >= 0 && income<= 41200 )
	taxpay= 0.15*income;
	else if (income >41200 && income <= 99600 )
	taxpay= 6180.0+ .28*(income-41200);
	else if (income > 99600)
	taxpay= 22532.0 + .31*(income- 99600);
	cout<<"\nIf you are married filing jointly and your income is "<<income
		<<" dollars, \nthen you owe the IRS "<<taxpay<<" dollars."<<endl;
	}
	else if (marriedStatus>2)
	cout<< "Error. Bad value. Try again."<<endl<<endl;
return 0;
}
