//fun lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

double fToC(double); //prototype for fToC function - Fahrenheit to Celsius conversion
double cToF(double); //prototype for cToF function - Celsius to Fahrenheit conversion

double radosph (double); //prototype for radius of a sphere function

double pythagorean (double, double); //prototype for hypotenuse of a triangle function

main ()
{
	cout << setiosflags(ios::fixed) << setprecision(2);
	double fahrenheit;
	double celsius;

	double rad;
	double vol;

	double a;
	double b;
	double c;
	
	cout << "** - Temperature Conversions - **" << endl << endl;

	//Fahrenheit to Celsius Conversion
	cout<<"1. Fahrenheit to Celsius Conversion\n";
	cout << "Enter temperature in degrees Fahrenheit :: ";
	cin >> fahrenheit;

	celsius = fToC(fahrenheit);
	cout << fahrenheit << " degrees Fahrenheit = " << celsius << " degrees Celsius" << endl <<endl;


	//Celsius to Fahrenheit Conversion
	cout<<"2. Celsius to Fahrenheit Conversion\n";
	cout<<"Enter temperature in degrees Celsius :: ";
	cin>> celsius;

	fahrenheit= cToF(celsius);
	cout<< celsius << "degrees Celsius = " <<fahrenheit << "degrees Fahrenheit" <<endl <<endl;

	cout<< "**Radius of a Sphere to Volume**"<<endl<<endl;

	//Radius to Volume of a Sphere
	cout<<"Enter the radius of a sphere :: ";
	cin>>rad;
	vol = radosph(rad);
	cout<<"The sphere has a volume of "<<vol<<endl<<endl;

	cout<<"**Hypotenuse using the Pythagorean Theorem**"<<endl<<endl;


	//Hypotenuse using the Pythagorean Theorem
	cout<<"Enter A and B values for your triangle."<<endl;
	cout<<"A: ";
	cin>>a;
	cout<<"\nB: ";
	cin>>b;
	c= pythagorean (a, b);
	cout<<"The hypotenuse of your triangle = "<<c<<endl;
	cout<<"\n\n\nAwesome, this program works."<<endl;

	


	return 0;

}

//Functions


//Fahrenheit to celsius Conversion
double fToC (double ftemp){

	return (5.0/9)*(ftemp-32);

}

//Celsius to Fahrenheit Conversion
double cToF (double ctemp){

	return (9.0/5)*(ctemp)+32;
}

//Sphere Radius to Volume Conversion
double radosph (double radamt){

	return (4.0/3)*(3.14159*(radamt*radamt*radamt));
}

//Hypotenuse using the Pythagorean Theorem 
double pythagorean (double a, double b)
{
	return sqrt ((a*a)+(b*b));
}
	 
