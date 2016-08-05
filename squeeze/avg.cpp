	//Average Lab by Esmail Hamidi	

#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>


main()
{	int number, iter=0;
			long total=0;
	ifstream numb3rs;
	numb3rs.open("numbers.txt", ios::in);
			while (numb3rs>>number)
	{
		cout<<setw (4)<<number<<endl; 
		iter++;
		total+=number;
	}
	cout<<"\nNumber of Numbers: "<<iter<<endl;
		cout<<"Sum of numbers: "<<total<<endl;
			cout<<"Avg. Number: "<<total/iter<<endl<<endl;
	return 0;
}