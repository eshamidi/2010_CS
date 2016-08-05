//Dice Lab by Esmail Hamidi
#include <iostream.h>
#include <stdlib.h>
#include "dice.h"



 

main ()

{

        dice  die1(6), die2(6);

        double  loop,  numRoll;
		int total;
		double two=0, three=0, four=0, five=0, six=0;
		double seven=0, eight=0, nine=0, ten=0, eleven=0, twelve=0;
		cout<<"Input the number of rolls you want to run."<<endl;
		cin>>numRoll;
 

        for (loop=1; loop<=numRoll; loop++)

        {
                total = die1.roll() + die2.roll();
                cout << total << endl;
				switch (total)
				{
				case 2: two++; break;
				case 3: three++; break;
				case 4: four++; break;
				case 5: five++; break;
				case 6: six++; break;
				case 7: seven++; break;
				case 8: eight++; break;
				case 9: nine++; break;
				case 10: ten++; break;
				case 11: eleven++; break;
				case 12: twelve++; break;
				}
        }

        cout << "\n# sides on die1 = " << die1.numSides() << endl;
        cout << "# sides on die2 = " << die2.numSides() << endl<<endl;
		cout<<"# rolls on die1 = "<<die1.numRolls ()<<endl;
		cout<<"# rolls on die2 = "<<die2.numRolls ()<<endl<<endl;
        cout<<"Stats:"<<endl<<endl;	
		cout<<"Total of Roll"<<"\t"<<"Experimental Probability"<<endl;
		cout<<"2"<<"\t\t"<<two/numRoll*100<<"%"<<endl;
		cout<<"3"<<"\t\t"<<three/numRoll*100<<"%"<<endl;
		cout<<"4"<<"\t\t"<<four/numRoll*100<<"%"<<endl;
		cout<<"5"<<"\t\t"<<five/numRoll*100<<"%"<<endl;
		cout<<"6"<<"\t\t"<<six/numRoll*100<<"%"<<endl;
		cout<<"7"<<"\t\t"<<seven/numRoll*100<<"%"<<endl;
		cout<<"8"<<"\t\t"<<eight/numRoll*100<<"%"<<endl;
		cout<<"9"<<"\t\t"<<nine/numRoll*100<<"%"<<endl;
		cout<<"10"<<"\t\t"<<ten/numRoll*100<<"%"<<endl;
		cout<<"11"<<"\t\t"<<eleven/numRoll*100<<"%"<<endl;
		cout<<"12"<<"\t\t"<<twelve/numRoll*100<<"%"<<endl;
		
		return 0;

}

