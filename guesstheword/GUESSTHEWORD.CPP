//Guess The Word Lab by Esmail Hamidi

#include <iostream.h>
#include <apstring.h>
#include <fstream.h>
#include <iomanip.h>
#include <process.h>
#include "apvector.h"

void printVector (apvector<char>);
bool hasUnsolved (apvector<char>);
apvector <char> solve (char, apvector<char>, apvector<char>);

main()
{
	apstring theWord;
	cout<<"Guess The Word."<<endl;
	cout<<"Player 1: Enter a word for Player 2 to guess. No peeking!"<<endl;
	cin>>theWord; //enter in word to guess; stored as apstring 

	apvector<char> word(theWord.length(), 0); //word stored in array, converted from apstring
		for (int i=0; i<word.length(); i++)
		word[i]=theWord[i];

		apvector<char>guesses( theWord.length(), '_'); //solution vector; all chars set to _

	cin.get(); //pauses output, clears screen; press enter to continue
	system("CLS");
	int counter=0; //counter variable to count number of tries 
	while (hasUnsolved (guesses) == true) //loop runs as long as there are blanks 
	{
		printVector (guesses);
		cout<<"Player 2: Enter in a letter to guess the word."<<endl;
		char guess=0;
		int count=0;
		cin>>guess;
		guesses = solve (guess, guesses, word);
		system ("CLS"); //clear screen
		counter++;
	}
	cout<<"You have successfully guessed the word "<<theWord<<" in "<<counter<<" tries."<<endl<<endl;



	return 0;
}
bool hasUnsolved (apvector<char> guesses) //check whether there are unsolved letters 
{
	bool unsolved=false;
	for(int i=0; i<guesses.length(); i++)
	{
		if (guesses[i] == '_')
			unsolved=true;
	}
	return unsolved;
}

void printVector (apvector<char> guesses) //print the guesses vector
{
	cout<<endl;
	for(int i=0; i<guesses.length(); i++)
	{
		cout<<guesses[i]<<" ";
	}
	cout<<endl;
}
apvector<char> solve (char guess, apvector<char> guesses, apvector<char> word) //check for correct letters, replaces blanks with letters 
{
	for(int i=0; i<guesses.length(); i++)
	{
		if ( guess == word [i])
			guesses [i] = guess;
	}
	return guesses;
}