//Compact Lab by Esmail Hamidi
//read a series of numbers from disk and filter 0's from output. Print out before and after versions. 


#include "apvector.h"
#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>

void readIt (apvector<int>&);
void compactIt(apvector<int>&);

main()
{
	apvector<int> liszt (100);
	readIt(liszt);
	compactIt(liszt);


	return 0;

}

void readIt(apvector<int>&liszt)
{
	int values, iter=0;
	ifstream j;
	j.open ("compact.txt", ios::in);

	while (j>>values)
	{
		liszt[iter] = values;
		iter++;
	}
	liszt.resize(iter);
	cout<<"Before compaction: "<<endl;
	for (iter=0; iter<liszt.length(); iter++)
	{
		cout<<setw(5)<<liszt[iter]<<endl;
	}
	cout<<endl;
}

void compactIt (apvector<int>&liszt)
{
	apvector<int>nouveau (liszt.length());
	int iter2=0;
	for(int iter=0; iter<liszt.length(); iter++)
	{
		if (liszt[iter]!=0)
		{
			nouveau[iter2]=liszt[iter];
			iter2++;
		}
	}
	nouveau.resize(iter2);
	cout<<"After Compaction:"<<endl;
	for(iter=0; iter<nouveau.length(); iter++)
		cout<<setw (5)<<nouveau[iter]<<endl;

}

