//Statistics Lab by Esmail Hamidi
//11/30/10

#include <iostream.h>
#include <iomanip.h>
#include "apvector.h"
#include <fstream.h>
#include <math.h>

void getData (apvector<int> &);
void printData (apvector<int> &);
double getAvg (apvector<int> &);
double getStdDev (apvector<int> &);
int getMode (apvector<int> &);

main()
{
	apvector<int> list (1000);

	getData (list);
	printData (list);
	cout<<"The average of the data is "<<getAvg (list)<<"."<<endl;
	cout<<"The standard deviation of the data is "<<getStdDev (list)<<"."<<endl;
	cout<<"The mode is "<<getMode(list)<<"."<<endl;

	return 0; 
}

void getData (apvector<int>  &list)
{
	int number, iter=0;
	ifstream numb3rs;
	numb3rs.open ("numbers.txt", ios::in);

	while (numb3rs>>number)
	{
		list[iter] = number;
		iter++;
	}
	list.resize(iter);
}

void printData (apvector<int> &list)
{
	for(int iter=0; iter<list.length(); iter++)
	{
		cout<<setw (5)<<list[iter];
	}
	cout<<endl<<endl;
}

double getAvg (apvector<int> &list)
{
	double total=0;
	double avg;
	for (int iter=0; iter<list.length(); iter++)
	{
		total+=list[iter];
	}
	avg=total/iter;
	return avg;
}

double getStdDev (apvector<int> &list)
{
		double total=0;
	double avg;
	for (int iter=0; iter<list.length(); iter++)
	{
		total+=list[iter];
	}
	avg=total/iter;
	double std=0;
	for ( iter=0; iter<list.length(); iter++)
		std+=pow(list[iter]-avg,2);
	std= std/(list.length() - 1);
	std= sqrt(std);
	return std; 
}

int getMode (apvector<int> &list)
{
	int numTracker =1, saveNum;
	int numCounter1=0, numCounter2=0;

	for (numTracker=1; numTracker<=100; numTracker++)
	{
		numCounter2=0;

		for (int z=0; z<list.length(); z++)
		{
			if (list[z] == numTracker)
				numCounter2++;
		}

		if (numCounter2> numCounter1)
		{
			numCounter1=numCounter2;
			saveNum= numTracker;
		}
	}

	return saveNum;

}
