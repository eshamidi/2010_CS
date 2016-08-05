//Fibonacci Lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>

void recursiveMult ();
int recursiveMultIt (int, int);
void recursiveFib ();
int recursiveFibit (int);
void nonRecursiveFib ();
int nonRecursiveFibit (int);
//void functions with corresponding int function-allows isolation of variables from main program
main()
{
	int  menu;
	cout<<"*Fibonacci Lab by Esmail Hamidi*"<<endl<<endl;
	cout<<"Choose 1 for fibonacci calculation with recursion."<<endl;
	cout<<"Choose 2 for fibonacci calculation without recursion."<<endl;
	cout<<"Choose 3 for multiplication using recursion."<<endl;
	cout<<"Press 0 to exit."<<endl;
	cin>>menu;
	if (menu==3)
	recursiveMult ();
	else if (menu==2)
	nonRecursiveFib ();
	else if (menu==1)
	recursiveFib ();
	return 0;
}

void recursiveMult ()
{
	cout<<"You have chosen recursive multiplication."<<endl;
	int a,b;
	cout<<"Enter in 2 values you want to multiply recursively."<<endl;
	cout<<"A:";
	cin>>a;
	cout<<"B:";
	cin>>b;
	int end=recursiveMultIt (a, b);
	cout<<"Your answer is "<<end<<endl;
}


int recursiveMultIt (int a, int b)
{
	if (b==0)
		return 0;
	else 
		return a+ recursiveMultIt(a, b-1);

}
void nonRecursiveFib ()
{	int end=0;
	cout<<"You have chosen non-recursive Fibonacci calculation."<<endl;
	int a;
	cout<<"Enter in one value greater than zero to calculate the Fibonacci equivalent."<<endl;
	cin>>a; 
	end=nonRecursiveFibit (a);
	cout<<"Your answer is "<<end<<endl;
}

int nonRecursiveFibit (int fibnum)
{
	int fibcount=2, minfib=0, maxfib=1,totalfib=0;
	for(fibcount=2; fibcount<=fibnum; fibcount++)
	{
		totalfib=maxfib + minfib;
		minfib=maxfib;
		maxfib=totalfib;
	}
	return totalfib;
}

void recursiveFib ()
{
	cout<<"You have chosen recursive Fibonacci calculation."<<endl;
	int a; 
	cout<<"Enter in one value greater than zero to calculate the Fibonacci equivalent."<<endl;
	cin>>a; 
	int end=recursiveFibit (a);
	cout<<"Your answer is "<<end<<endl;
}

int recursiveFibit (int a)
{
	if (a==0 || a==1)
		return a;
	else
		return recursiveFibit (a-1) + recursiveFibit (a-2);
}