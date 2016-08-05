//Squeeze Lab by Esmail Hamidi

#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>

main()
{
	char text;
	int spaceCount=0;
	ifstream squeezit;
	squeezit.open("avg.cpp", ios::in);
	ofstream after;
	after.open ("avgafter.txt", ios::out);
	while (squeezit.get(text))
	{
		
	
			while (text==9)
			{
				spaceCount+=4;
				squeezit.get(text);
			}
			while (text==32)
			{
				spaceCount+=1;
				squeezit.get(text);
			}
			cout<<spaceCount<<setw(4)<<text;
			after<<spaceCount<<setw(4)<<text;
			while  (text!=10 && squeezit.get(text))
			{
				cout<<text;
				after<<text;

			}
	
			spaceCount=0;
	}
	cout<<endl;
	return 0;
}
	
//ASCII 32=space, 9=tab, 10=end of line