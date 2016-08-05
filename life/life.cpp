//Life lab by Esmail Hamidi
//12/10/10

#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#include "apmatrix.h"


//Function prototypes
void printTable(apmatrix<bool> &table);
void generateLife(apmatrix<bool> &table);
int countNeighbors(apmatrix<bool> &previousGen, int row, int col);
void stats(apmatrix<bool> &table);
main () { //Begin main program

	//Variable declarations
	apmatrix<bool> table(22,22,false);  //table to hold bacteria
	ifstream infile("life100.txt", ios::in); //input stream
	int row, col, numBact, numGen, count = 0; //miscellaneous
	
	infile >> numBact; //input number of bacteria

	//input original generation of bacteria
	while (count < numBact) {
		infile >> row;
		infile >> col;
		count++;
		table[row][col] = true;  //add bacteria to the table at row, col. at every set of coordinates, life is given as true. 
	}
	//Table has been created. 1st generation is all ready to be printed. 
	cout << "** LIFE **" << endl << endl;
	cout << "Enter number of generations :: ";
	cin >> numGen;
	cout << endl << endl;

	//print initial bacteria population
	int gen = 0;
	cout << "Generation :: " << gen << endl;
	printTable(table);  //print bacteria table

	//print bacteria genration 1 through numGen
	for(gen = 1; gen <= numGen; gen++){
		cin.get(); //pauses output; press enter to continue
		system("CLS");  //clears screen after each generation is printed
		cout << "Generation :: " << gen << endl;
		generateLife(table); //creates next generation of bacteria, references function
		printTable(table);  //print bacteria table, references function
		stats(table);
	}

	return 0;

}//End main program

//Function to print contents of bacteria table
void printTable(apmatrix<bool> &table){
	for (int row = 1; row <= 20; row++) {
		for (int col = 1; col <= 20; col++) {
			if(table[row][col] == true) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}

//Function to generate new bacteria generation
void generateLife(apmatrix<bool> &table){
	apmatrix<bool> previousGen(22,22,false);
	previousGen = table;
	int numNeighbors;

	//check each cell of previousGen to see if bacteria
	//lives or dies into next generation...store true/false into table
	for (int row = 1; row <= 20; row++) {
		for (int col = 1; col <= 20; col++) {
			numNeighbors = countNeighbors(previousGen, row, col);

			if (numNeighbors<=1 && table [row] [col] == true)
				table [row] [col] = false; // <=1 neighbor, die of overcrowding 
			if (numNeighbors==3 && table [row] [col] ==false)
				table [row] [col] = true;	//if an unoccupied cell has 3 neighbors, it springs to life
			if (numNeighbors ==2 || numNeighbors ==3 && table [row][col] == true)
				table [row] [col] =true; //if a cell is alive and has 2 or 3 neighbors, it lives 
			if (numNeighbors >=4 && table [row] [col] == true)
				table [row] [col] = false; //if a cell has 4 or more neighbors, it dies of overcrowding 


		}
	}
}

//Function to count a cell's neighbors
int countNeighbors(apmatrix<bool> &previousGen, int row, int col){
	int count = 0; //counts number of neighbors  
		if (previousGen [row] [col+1] == true) //moves one to the right to check
		count++;
		if (previousGen [row] [col-1] == true) //moves one to the left 
		count++;
		 if (previousGen [row+1] [col] ==true) //moves down to check
		count++;
		if (previousGen [row-1] [col] ==true) //moves up
		count++;
		 if (previousGen [row-1] [col-1] ==true) //moves up and left 
		count++;
		 if (previousGen [row-1] [col-1] == true) //moves up and right
		count++;
		 if (previousGen [row+1] [col-1] ==true) //moves down and left
		 count++;
		if (previousGen [row+1] [col+1] ==true) //down and right
		count++;
	return count;
}

void stats (apmatrix<bool> &table)
{
	int livingBeings=0; 
	for (int row=0; row<table.numrows(); row++)
		for (int col=0; col<table.numcols(); col++)
			if (table [row] [col] == true)
				livingBeings++;

			cout<<"Living Beings: "<<livingBeings<<endl;
}

//This does not work properly.  Please check your output with the lab assignment.
//Also, you are missing output...see instructions.
//-6