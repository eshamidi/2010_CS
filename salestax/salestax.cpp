//Sales Tax Program by Esmail Hamidi and Friends
#include <iostream.h>
#include <math.h>
#include <stdlib.h>
main()
{
	char state;
	double b4price;
	double afterprice;
	cout<<"Enter the price for the goods you wish to purchase."<<endl;
	cin>>b4price;
	cout<<"\nEnter capital M for Maryland, D for Delaware, \nP for Pennysylvania, W for West Virginia, or V for Virginia."<<endl;
	cin>>state;
	if (int state = 77)
	afterprice= b4price + b4price*0.05;
	else if (int state = 68)
	afterprice= b4price;
	else if (int state = 80)
	afterprice= b4price+b4price* .06;
	else if (int state = 87)
	afterprice= b4price+b4price*.04;
	else if (int state = 86)
	afterprice= b4price+b4price*.07;
	cout<<"The price for a "<<b4price<<" item is "<<afterprice<<" in your state."<<endl<<endl;
	return 0;
}
//this does not work...try again
