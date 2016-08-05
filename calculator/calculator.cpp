//Calculator Lab by Esmail Hamidi 10.1.10

#include <iostream.h>
#include <math.h>
#include <stdlib.h>

void menuSelect (char &); //function prototype to define task to be performed
double addThem (double, double); //addition operation
double subtractThem (double, double); //subtraction operation
double multiplyThem (double, double); //multiplication function
double divideThem (double, double); //division function
double squareFormula (double);//square formula
double cubeFormula (double); //cube formula
void sortThem (double&, double&) ;

main()
{	cout<<"  **C++ Calculator App by Esmail Hamidi**  "<<endl<<endl;
	cout<<"   Menu Codes: \nA  Addition\nB  Subtraction\nC  Multiplication";
	cout<<"\nD  Division\nE  Square Formula\nF  Cube Formula\nG  Sort in Increasing Order"<<endl<<endl;

	char menu;
	double answer=0;
	double first=0;
	double second=0;
	menuSelect (menu);
	cout<<"\nYou have chosen "<<menu<<"."<<endl;
	if (menu=='A' || menu=='a')
	answer= addThem (first, second);
	else if (menu=='B' || menu== 'b')
	answer= subtractThem (first,second);
	else if (menu=='C' || menu=='c')
	answer= multiplyThem (first, second);
	else if (menu== 'D' || menu=='d')
	answer= divideThem (first, second);
	else if (menu== 'E' || menu=='e')
	answer= squareFormula (first);
	else if (menu== 'F' || menu=='f')
	answer= cubeFormula (first);
	else if (menu== 'G' || menu== 'g')
	sortThem (first, second);
	if (answer>0)
	cout<<"Your answer returned is "<<answer<<endl;
	return 0;
}

void menuSelect (char &a)
{ 
	cout<<"Enter in the calculation type you want to do."<<endl;
	cin>>a;
}

double addThem (double first, double second)
{
	double answer;
	cout<<"**Add Function**"<<endl<<endl;
	cout<<"Enter in the two values you wish to add."<<endl;
	cin>>first>>second;
	answer=first + second;
	return answer;
}

double subtractThem (double first, double second)
{ 
	double answer;
	cout<<"**Subtract Function**"<<endl<<endl;
	cout<<"Enter in the two values you wish to subtract from one another."<<endl;
	cin>>first>>second;
	answer=first-second;
	return answer;
}
double multiplyThem (double first, double second)
{
	double answer;
	cout<<"**Multiplication Function**"<<endl<<endl;
	cout<<"Enter in the two values you wish to multiply."<<endl;
	cin>>first>>second;
	answer=first*second;
	return answer;
}
double divideThem (double first, double second)
{
	double answer;
	cout<<"**Division Function**"<<endl<<endl;
	cout<<"Enter in the two values you wish to divide from one another."<<endl;
	cin>>first>>second;
	answer=first/second;
	return answer;
}

double squareFormula (double first)
{
	double answer;
	cout<<"**Formula of a Square**"<<endl<<endl;
	cout<<"Enter in the length of a side."<<endl;
	cin>>first;
	answer=first*first;
	return answer;
}

double cubeFormula (double first)
{
	double answer;
	cout<<"**Formula of a Cube**"<<endl<<endl;
	cout<<"Enter in the length of an edge."<<endl;
	cin>>first;
	answer=first*first*first;
	return answer;
}
void sortThem (double &first, double &second)
{
	cout<<"**Sort Two Numbers in Increasing Order**"<<endl<<endl;
	cout<<"Enter the two numbers to be sorted."<<endl;
	cin>>first>>second;
	if (first>second)
	cout<<"Your values in increasing order are "<<second<<","<<first<<endl<<endl;
	else if (first<second)
	cout<<"Your values in increasing order are "<<first<<","<<second<<endl<<endl;
}
