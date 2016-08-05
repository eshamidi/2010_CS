//Summation All Over the Nation by Esmail Hamidi
//11/3/10

#include <iostream.h>
#include <math.h>

int recursion ( int, int);

main()
{
	int k, n, end;
	cout<<"*Summation Lab by Esmail Hamidi*"<<endl<<endl<<endl;
	cout<<"Enter values k (low value) and n (high value)."<<endl;
	cout<<"K:";
	cin>>k;
	cout<<"N:";
	cin>>n;

	end=recursion (k, n);
	cout<<end;
	return 0;
}

int recursion (int k, int n) 
{ 

     if ( n <= k ) return 0;
     else
          return n + recursion(k, n-1);

}

//off by 1 (-1)