//  9/27/10 Incentive Lab by Esmail Hamidi and Friends

#include <iostream.h>
#include <iomanip.h>
#include <math.h.>
#include <stdlib.h>

void getInfo (long&, int&, double&); //protofunction getInfo
double calcBonus (int, double); //protofunction to calculate bonus
void displayIt (long&, int&, double&, double&);//protofunction Displayit

main()

{
	long empNum;
	int years;
	double salary;
	double bonus=0;
	cout<<"		***C++ Corporation Bonus Calculator***"<<endl<<endl;
	getInfo (empNum, years, salary);
	bonus= calcBonus (years, salary);
	displayIt (empNum, years, salary, bonus);
	return 0;
}
void getInfo (long &data1, int &data2, double &data3)
{ 
	
	cout<<"Enter the Employee ID number."<<endl;
	cin>>data1;
	cout<<"\nHow many years have you been employed at C++ INC?"<<endl;
	cin>>data2;
	cout<<"\nWhat is your salary?"<<endl;
	cin>>data3;
 }

double calcBonus (int time, double sal)
{ 
	double bonus;
	if (time<=5)
	bonus = 100.00;
	else if (time>5 && time<=9)
	bonus = sal*.075;
	else if (time>9)
	bonus = sal*.15;
	return bonus;
}

void displayIt (long &data1, int &data2, double &data3, double&data4)
{
	setprecision (5); 
	cout<<"\nEmployee"<<"   "<<"Years"<<"   "<<"Annual"<<"   "<<"Bonus"<<endl;
	cout<<"Number  "<<"   "<<"Served"<<"  "<<"Salary"<<"   "<<"     "<<endl;
	cout<<data1<<"      "<<data2<<"      "<<data3<<"    "<<data4<<endl;

}