//Gradebook Lab by Esmail Hamidi
//program to read in a set of gradebook data and then do things with it. 
//tasks: read data into matrix, compute averages for each student/each assignment.


#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include "apmatrix.h"
#include <fstream.h>

double avg (apmatrix<double>); //compute averages 
apmatrix<double> gradeload (); //load up grades into matrix
void printTable (apmatrix<double>); //print table w/avgs 

main()
{
	apmatrix<double> grdbk = gradeload ();
	for (int rows=0; rows<25; rows++)
		for (int cols=0; cols<6; cols ++)
		{
			cout<<grdbk [rows][cols] <<" ";
			if (cols==6)
			cout<<endl;
		}



	return 0;
}

apmatrix <double> gradeload ()
{
	apmatrix<double> grdbk (25, 7, 0);
	ifstream grades;
	double vals=0;
	grades.open ("grdbook.dat", ios::in);
	for (int rows=0; rows<25; rows++)
	{
		for (int cols=0; cols<6; cols++)
		{
			grades>>vals;
			grdbk [rows] [cols] = vals;
		}
	}
	return grdbk;
}

void printTable (apmatrix<double>grdbk)
{

	for (int rows=0; rows<25; rows++)
		for (int cols=0; cols<6; cols ++)
		{
			cout<<grdbk [rows][cols] <<" ";
			if (cols==6)
			cout<<endl;
		}
