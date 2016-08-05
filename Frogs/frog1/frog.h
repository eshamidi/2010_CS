//frog.h
//class to simulate random movement of a frog

#ifndef _FROG_H
#define _FROG_H


#include <stdlib.h>
#include "dice.h"

class frog
{
	public: // behaviors
		frog();
		void hop();
		int getPos() const;
		int numMoves();
	private: // attributes
		int myPosition;
		dice myDice;
};

// constructor
frog::frog()
: myPosition(0), myDice(2)
{

	// all private variables initialized using initializer list
}

// mutator function - changes position of the token
void frog::hop()
{

	int direction= myDice.roll();
	if (direction==1)
		myPosition--;
	else myPosition++;
}

// accessor function - returns current position of token
int frog::getPos() const
{
	return myPosition;
}



#endif