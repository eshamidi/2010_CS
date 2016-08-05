//Frog Lab No.2 by Esmail Hamidi
//asks for input desired position from origin
//continues until position is reached
//outputs final position and number of steps
#include <iostream.h>
#include "frog.h"

// simulates a one-dimensional random walk
// This lab idea is credited to Owen Astrachan, Duke University
// A Computer Science Tapestry, McGraw-Hill, ©1997, p.311



main()
{
	int numSteps=0, poz;
	frog bob;		   	// used for coin flipping
	
	cout <<"Enter desired position."<<endl;
	cin >>poz;
	while (bob.getPos ()!=poz)
	{	bob.hop ();
		int blanks = 40 + bob.getPos();	// a pictoral view of the walk
		for (int j=0; j<blanks; j++)
			cout << " ";
		cout << "*" << endl;
	}
	cout<<"final position = "<<bob.getPos()<<endl;
	cout<<"Number of moves= "<<bob.numMoves()<<endl;
	return 0;
}
