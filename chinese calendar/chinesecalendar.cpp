//Chinese Calendar Lab by Esmail Hamidi

#include <iostream.h>
#include <math.h>
#include <stdlib.h>


main()

{
	int year;
	cout<<"**Chinese Calculator Converter**\n"
	    <<"Enter the year you wish to convert:"<<endl<<endl;
	cin>>year;
	switch  (year%12) {
	case 0:
    cout<<year<<" is the year of the monkey."<<endl;
	break;
	case 1:
    cout<<year<<" is the year of the rooster."<<endl;
	break;
	case 2:
    cout<<year<<" is the year of the dog."<<endl;
	break;
	case 3:
    cout<<year<<" is the year of the boar."<<endl;
	break;
	case 4:
    cout<<year<<" is the year of the rat."<<endl;
	break;
	case 5:
    cout<<year<<" is the year of the ox."<<endl;
	break;
	case 6:
    cout<<year<<" is the year of the tiger."<<endl;
	break;
	case 7:
    cout<<year<<" is the year of the rabbit."<<endl;
	break;
	case 8:
    cout<<year<<" is the year of the dragon."<<endl;
	break;
	case 9:
    cout<<year<<" is the year of the snake."<<endl;
	break;
	case 10:
    cout<<year<<" is the year of the horse."<<endl;
	break;
	case 11:
    cout<<year<<" is the year of the ram."<<endl;
	break;
	}

	return 0;
}
