//How Many A's Lab (revised) by Esmail Hamidi

#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include "apvector.h"

//function prototypes
apvector<int> loadData (); 
void DisplayThem (apvector<int>);

main()
{	
	apvector<int> sto =loadData();
	DisplayThem(sto);
	return 0;
}

apvector<int> loadData() //loads the freq of letters into the array, returns the completed array
{ 
	apvector<int> store (126,0);
	ifstream cpp;
	char charz=0;
	int inc=65;
	cpp.open ("letcnt.dat", ios::in);
	while( cpp>>charz)
	{
		if (charz>=97&& charz<=122)
			charz-=32;

		store[charz]++;
	}
	return store;
}

void DisplayThem(apvector<int> sto) //displays the letter and freq of the letter in the doc 
{
	int inc=65;
	cout<<"Letter"<<setw (10) <<" "<<"Frequency"<<endl;
	while (inc<=90)
	{
		cout<<char(inc)<<setw(15)<<sto[inc]<<endl;
		inc++;
	}
}


// Documentation -3
// Use of functions -3

// 24/30

//Okay, better +5 (29/30)