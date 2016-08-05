//Quadratic Lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>
#include <iomanip.h>
#include <stdlib.h>

main()
{ 
	double A, B, C;
	cout<<"Input the coefficents for your quadratic equation.";
	cout<<"\nA=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	cout<<"C=";
	cin>>C;

	//Run Output: Answer I
	double X;
	X= -B+  (sqrt ((B*B)-4*A*C)/(2*A));
	cout<<"\nPossible answer #1: X="<<X<<endl;

	//Run Output: Answer II;
	double Z;
	Z= -B- (sqrt ((B*B)-4*A*C)/(2*A));
	cout<< "\nPossible answer #2: X="<<Z<<endl;


	return 0;
}

//incorrect run output -3