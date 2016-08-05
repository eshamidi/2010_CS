//Car Rental 9/8

#include <iostream.h>
#include <apstring.h> 

main()
{

	apstring make, model;


	//Make and Model
	cout<< "Enter in the model and make of your car.\n"
		<<"Make:";
	cin>> make; 
	cout<< "Model:";
	cin>> model; 

	//License Plate Code
	char c1,c2,c3;
	long num1;
	cout<< "Enter in the license plate of your car.\n";
	cin>> c1,c2,c3, num1;



	//Run Output
	cout<<make<<endl;
	cout<<model;

	cout<< long (c1+c2+c3);
	return 0; 

} 

//incomplete -5