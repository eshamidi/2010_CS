//frog 3 lab by Esmail Hamidi
//displays the movement of 2 frogs 
//outputs final positions
#include <iostream.h>
#include "frog.h"



main()
{
	int numSteps, k;
	frog bob; //symbol *
	frog kermit; //symbol @
	
	cout << "Enter # of steps for two frogs ---> ";
	cin >> numSteps;
	for (int f=0; f<40; f++)
		cout<<" ";
	cout<<"$"<<endl;
	for (k=0; k < numSteps; k++)
	{
	
			kermit.hop();
			bob.hop();
		// a pictoral view of the walk
			
			if (bob.getPos()==kermit.getPos())
			{
				int blanks = 40 + kermit.getPos();
				for (int j=0; j<blanks; j++)
				{
					cout<<" ";
				}	
				cout<<"$"<<endl;
			} 
			//if frogs have same position, dollar sign displays 
			if (kermit.getPos()<bob.getPos())
			{
				int blanks = 40 + kermit.getPos();
				int blancs = 40 + bob.getPos(); 
				for (int j=0; j<blanks; j++)
				{
					cout<<" ";
				}
				cout<<"@";
				//prints out kermit's position first
				for ( j=0; j<blancs-blanks-1; j++)
					cout<<" ";
				cout<<"*"<<endl;
				//prints out bob's position next
			}
			if (bob.getPos()<kermit.getPos())
			{
				int blanks = 40 + kermit.getPos();
				int blancs = 40 + bob.getPos(); 
				for (int j=0; j<blancs; j++)
				{
					cout<<" ";
				}
				cout<<"*";
				for ( j=0; j<blanks-blancs-1; j++)
				{
					cout<<" ";
				}
				cout<<"@"<<endl;
			}	
	}
	cout<<"final position of Bob = "<<bob.getPos()<<endl;
	cout<<"final position of Kermit = "<<kermit.getPos()<<endl;
	cout<<"Number of moves= "<<bob.numMoves()<<endl;
	return 0;
;}
