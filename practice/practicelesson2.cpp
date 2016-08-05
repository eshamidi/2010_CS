// September 1 10: Handbook Chaos 

#include <iostream.h>

main()
{
	// Task #1 - int
	int   number1 = 2;
	cout << "1. The value of number1 = " << number1;
	cout << " The byte size of number1 is " << sizeof (number1) << " bytes." << endl;
	cout << "\n\n";

	// Task #2 - long int
	long int number2 = 45679;
	cout << "2. The value of number2 = " << number2;
	cout << " The byte size of number2 is " << sizeof (number2) << " bytes." << endl;
	cout << "\n\n";

	// Task #3 - unsigned int
	unsigned int numba3 = 99;
	cout << "3. The value of numba3 = " << numba3;
	cout << " The byte size of numba3 is " << sizeof (numba3) << " bytes. " <<endl;
	cout << "\n\n";

	// Task #4 - character variables
	char symbol = 'G';
	cout << "4. The character is " <<symbol <<":";
	cout << " The byte size of the character is " <<sizeof (symbol) << " bytes." <<endl;
	cout << "\n\n";

	// Task #5 - float
	float   answer = 6.25;
	cout << "5. The value of numba4 = " << answer;
	cout << " The byte size of numba4 is " << sizeof (answer) << " bytes." << endl;
	cout << "\n\n";

	//Task #6 - double float 
	double numba5 =  0.125 ; 
	cout << "6. The value of numba5 = " << numba5<<".";
	cout << "\nThe byte size of numba5 is " <<sizeof (numba5)<< " bytes." <<endl;
	cout << "\n\n";

	//Task #7 - long double float 
	long double numba6 = 5.555;
	cout << "7. The value of numba6 = " <<numba6 <<".";
	cout << "\nThe byte size of numba6 = " <<sizeof (numba6) << "bytes." <<"\n\n";

	//Task #8 - bool var
	bool dude = false;
	cout << "8. The value of dude is " <<dude <<".\n";
	cout << "The byte size of dude is " <<sizeof (dude) <<"bytes.\n\n";

	//Task #9 - character ASCII info
	char awesome = 'G';
    cout << "9. The letter is " <<awesome <<"\n";
	cout << "The ASCII position is " << int (awesome) <<".\n\n";
	
	//Task #10 - convert ASCII to a letter
	int fug = 67;
	cout << "10. The ASCII value fug is " <<fug <<"\n";
	cout << "The character value for fug is " <<char (fug) <<".\n\n";
	return 0;
}     
