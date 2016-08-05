//Pictures Lab by Esmail Hamidi
#include <iostream.h>
#include <math.h>

void multiTable ();
void pyramid ();
main()
{
	//data entry; rows and columns
	multiTable ();
	cin.get ();
	pyramid ();

	return 0;
}

void multiTable ()
{
	//data entry; rows and columns
	int val1, val2;
	cout<<"Enter in two values to generate a multiplication table."<<endl;
	cin>>val1;
	cin>>val2;
	int row=1, col=1;
	cout<<endl;

	//print out column indicators
	for (col=1; col<=val2; col++)
	{
		cout<<"\t"<<col;
	}
	cout<<endl<<"________________________"<<endl<<endl;



	col=1; //resets col to 1 so values are not affected


	//actual table calculations
	for (col=1; row<=val1; row++)
	{
		while (col<=val2)
		{
		if (col==1)
		{
		//row indication
		cout<<row<<"\t";
		}
		//
		cout<<row*col<<"\t";
		col++;
		}
	col=1;
	cout<<endl;
	}
}

void pyramid ()
{
	//enter amount of lines
	int line, space, stars, loop,num1;
	num1=0;
	cout<<"Enter the number of levels you want the pyramid to have."<<endl;
	cin>>num1;
	//for loops
	for (line = 1; line <=num1; line++)
	{
		space=num1-line+1;
		for (loop=1; loop<=space; loop++)
		
			cout<<" ";
			stars= 2*line-1;
			for (loop=1; loop<=stars; loop++)
			
				cout<<"*";

			cout<<endl;
	}

	
}