//GPA lab by Esmail Hamidi, Enrichment 10/20

#include <iostream.h>
#include <math.h>
#include <iomanip.h>
main()
{
	cout<<"GPA Analysis Program by Esmail Hamidi"<<endl;
	cout<<"Enter in class grades for the student."<<endl;
	char grade;
	double gpaVal=0.0;
	int classCount=0;
	double gpa=0;
	bool hasF=false;
do{	
		cin>>grade;
		classCount++;
		switch (grade)
		{
		//uppercase
		case 65: gpaVal+=4.0; break;
		case 66: gpaVal+=3.0; break;
		case 67: gpaVal+=2.0; break;
		case 68: gpaVal+=1.0; break;
		case 69: gpaVal+=0.0; break;
		case 70: gpaVal+=0.0;
		hasF=true; 
		break;
		
		//lower case
		case 97: gpaVal+=4.0; break;
		case 98: gpaVal+=3.0; break;
		case 99: gpaVal+=2.0; break;
		case 100: gpaVal+=1.0; break;
		case 101: gpaVal+=0.0; break;
		case 102: gpaVal+=0.0;
		hasF=true;
		break;
		}

		if ((grade<=70 && grade>=65) || (grade<=102 && grade>= 97 ))
		cout<<"Enter in another grade."<<endl;
		
	}	while ((grade<=70 && grade>=65) || (grade<=102 && grade>= 97 ));

	classCount--;
	gpa= gpaVal/classCount;
	cout<<"Final GPA is "<<gpa<<endl;
	setprecision (2);
	if (classCount<4)
	{
		cout<<"Ineligible, not enough classes taken."<<endl;
	}
		else if (gpa<2.0)
		{
			if (hasF==true)
			{
			cout<<"Ineligible, GPA less than 2.0 with F grade."<<endl;
			}

			else 
			{
			
				cout<<"Ineligible, GPA less than 2.0."<<endl;
			}

		}

			else if (hasF==true)
		{
				if (gpa>2.0)
				{
					cout<<"Ineligible. GPA above 2.0, but has F grade."<<endl;
				}
			}
			else
			{
					cout<<"Eligible."<<endl;
			}
	
	return 0;


}








