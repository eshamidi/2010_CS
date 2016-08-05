//Funktion Lab Number Two by Esmail Hamidi
#include <iostream.h>
#include <math.h> 
#include <iomanip.h>
#include <stdlib.h>

//Protofunctions
void getTwoNumbers (double &, double &);
void getTwoNumbers (int &, int &);
void print2Numbers (double &, double &);
void print2Numbers (int &, int &);
template <class data>
void swapit (data &a, data &b);

//main program
main ()
{
    double   x,y;
	int		z, a;
	getTwoNumbers (x,y);
	getTwoNumbers (z,a);
	print2Numbers (x,y);
	print2Numbers (z,a);
	cout<<"\nPerforming swap...."<<endl<<endl;
	swapit (x,y);
	swapit (z,a);
	print2Numbers (x,y);
	print2Numbers (z,a);
	 return 0;
}

// getTwoNumbers overloaded function
void  getTwoNumbers (double &data1, double &data2)
{
	cout << "Enter double number 1 ---> ";
	cin >> data1;
	cout << "Enter double number 2 ---> ";
	cin >> data2;
}
void getTwoNumbers (int &data, int &datadeux)
{
	cout << "Enter int number 1 ---> ";
	cin >> data;
	cout << "Enter int number 2 ---> ";
	cin >> datadeux;
}

//print2Numbers overloaded function
void print2Numbers ( double &num1,  double &num2)
{
	cout<<"The two double numbers are now"<<endl;
	cout<<num1<<"   "<<num2<<endl;
}
void print2Numbers (int &numb1, int &numb2)
{
	cout<<"The two int numbers are now"<<endl;
	cout<<numb1<<"   "<<numb2<<endl;
}

template  <class data>
void swapit (data &a, data &b)
{ 
	data temp = a;
	a=b;
	b=temp;
}


