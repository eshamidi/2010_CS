//Frog Lab No.1 by Esmail Hamidi
//displays path of frog
//outputs number of steps taken (computed by class)
//outputs final position
#include <iostream.h>
#include "frog.h"

// simulates a one-dimensional random walk
// This lab idea is credited to Owen Astrachan, Duke University
// A Computer Science Tapestry, McGraw-Hill, ©1997, p.311



main()
{
	int numSteps, k;
	frog bob;		   	// used for coin flipping
	
	cout << "Enter # of steps ---> ";
	cin >> numSteps;
	for (k=0; k < numSteps; k++)
	{
		int blanks=0;
		bob.hop ();
		blanks = 40 + bob.getPos();		// a pictoral view of the walk
		for (int j=0; j<blanks; j++)
		cout <<" ";
		cout <<"*"<< endl;
	}
	cout<<"Number of steps taken: "<<numSteps<<endl;
	cout<<"Final position: "<<bob.getPos()<<endl;

	return 0;
}
