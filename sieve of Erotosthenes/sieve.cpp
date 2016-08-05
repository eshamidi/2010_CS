//Sieve of Erotosthenes (Revised) - Esmail Hamidi

#include <iostream.h>
#include "apvector.h"
#include <iomanip.h>

//list of tasks: set up array, print array (before & after procedure), remove non-primes.

apvector<int>loadArray(); //sets up array with numbers 1-100
void printArray(apvector<int>); //prints array after every operation
apvector<int> elimination(apvector<int>); //eliminates primes- should it reference the print function?

main()
{
	cout<<"SIEVE OF EROTOSTHENES"<<endl;
	
	apvector<int>primes = loadArray(); //load data up
	cout<<"Numbers before removal of non-primes:"<<endl<<endl;
	printArray(primes); //print virgin data
	primes = elimination (primes); //eliminate non-primes
	cout<<endl<<endl;
	cout<<"After prime elimination: "<<endl<<endl;
	printArray(primes);
	cout<<endl; 
	return 0;
}


apvector<int>loadArray()
{
	apvector<int>primes (101);
	 
	int load=0; 
	int position=0;
	for (position=0; position<=100; position++) //sets up the array with numbers 1-100
	{
		primes [position]=load;
		load++;	
	}
	return primes;
}

void printArray (apvector<int> primes)
{	
	int advln=1;
	for (int position=0; position<=100; position++)
	{
		if (advln>10)	
		{
			cout<<endl;
			advln=1;
		}
		cout<<primes[position]<<setw(3);
		advln++;
	}
}

apvector<int> elimination (apvector<int> primes) //eliminate primes, print at end 
{
	for (int position=0; position<=100; position++)
	{
		if (primes [position] ==1)
			primes[position]=0;
		if (primes [position]%2==0 && primes[position] !=2)
			primes[position]=0;
		if (primes [position]%3==0 && primes[position] !=3)
			primes[position]=0;
		if (primes [position]%5==0 && primes[position] !=5)
			primes[position]=0;
		if (primes [position]%7==0 && primes [position] !=7)
			primes[position]=0;


	}
	return primes;
	
}
// Minimum documentation, no use of functions, inefficient procedure
// You should be using a tracker variable to keep track of the current multiple

// 24/30 (okay +4: 28/30)