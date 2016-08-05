//Funloops by Esmail Hamidi
#include <iostream.h>
#include <math.h>
#include <stdlib.h>

void findMagicSquares ();
void reverseAnInteger ();
void LCM ();
main()

{
	int menu;
	cout<<"*Funloops by Esmail Hamidi*"<<endl<<endl;
	cout<<"Enter 1 to find magic squares, 2 to reverse an integer, \n or 3 to find the least common multiple.\n"
		<<"Enter 0 to exit."<<endl;
	cin>>menu;
	if (menu==1)
	findMagicSquares ();
	else if (menu==2)
	reverseAnInteger ();
	else if (menu==3)
	LCM ();
   return 0;
}


void findMagicSquares ()
{

	int sum, howMany, runNum, increment, checkNum;

	sum=0;
	runNum= increment= checkNum=1;


	cout<<"*Finding Magic Squares*"<<endl;
	cout<<"Enter in the amount of magic squares you wish to find."<<endl;
	cin>>howMany;
	while (runNum<= howMany)
	{
		while (sum<checkNum*checkNum)
		{
			sum+=increment;
			increment++;
		}

		if (sum== checkNum *checkNum)
		{
			cout<<"Magic Square located."<<endl;
			cout<<"Square of "<<checkNum<<" is "<<pow (checkNum, 2)
			<<" using numbers 1 to "<<increment-1<<"!\n\n";
			runNum++;
		}

		
		checkNum++;
	}
}

void reverseAnInteger ()
{
	int reverseInt;
	cout<<"Enter an integer that you wish to reverse."<<endl;
	cin>>reverseInt;
	while (reverseInt>=1)
	{
	int remainder;

	remainder= reverseInt%10;
	reverseInt= reverseInt / 10; 
	cout<<remainder;
	}
}

void LCM ()
{ 
	int num1, num2;
	cout<< "Enter two numbers to find the least common multiple."<<endl; 
	cin>>num1;
	cin>>num2;

	int multiBig, multiSmall, bigInc=1, smallInc=1;
	if (num1>num2)
	{
		multiBig=num1;
		multiSmall=num2;
	}
	else if (num2>num1)
	{
		multiBig=num2;
		multiSmall=num1;
	}

	while (multiBig *bigInc != multiSmall*smallInc)
	{
		if (multiSmall*smallInc<multiBig*bigInc)
		{
			smallInc++;
		}
	else if (multiSmall * smallInc >multiBig * bigInc)
	{
		bigInc++;
	}
}
cout<<"The LCM of "<<num1<<" and "<<num2<<" is "<<multiBig*bigInc<<endl<<endl;

		
}