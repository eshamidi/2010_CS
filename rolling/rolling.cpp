

//Rolling Lab (Revised) by Esmail Hamidi
//12/13/10 

#include <iostream.h>
#include "dice.h"

main()

{
	cout<<"Rolling Lab by Esmail Hamidi."<<endl<<endl;
	//value declaration
	int count1=0, count2=0, count3=0; 
	int count=0;
	//cin statement determines sides 
	cout<<"Enter number of sides: ";
	int sides=0;
	cin>>sides;
	int iter=0; //sets counter variable to zero to ensure accuracy
		
	dice one (sides), two (sides), three (sides); //header reference
		do  //do while loop ensures process is done at least once
			{
		
				count1=one.roll();
				count2=two.roll();
				count3=three.roll();
				cout<<count1<<"  "<<count2<<"  "<<count3<<endl;
			iter++; //counter keeps track of how many times the loop is run
			}
		while ( count1==count2 || count1==count3 || count2==count3);
		
	cout<<"Count = "<<iter<<endl; //display of count
	return 0; 
}

// Documentation?
// You need to include an alternative conditional statement for your loop per the instructions (using DeMorgan's Law).
// 16/20 (okay +2: 18/20)