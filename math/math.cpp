//Math Lab Lesson 2 by Esmail Hamidi

#include <iostream.h>
#include <limits.h>
#include <float.h>
#include <math.h>

main()
{
	//Variables
	int num1=4+9;
	int num2=46/7;
	int num3= 46%7;
	float num4= 2* 3.0;
	float num5= float(25)/4;
	int num6= int(7.75)+2;
	int var7= ('P');
	char var8= 105; 
	
	

	//Output
	cout<< "1. four plus nine equals "<<num1<<endl;
	cout<< "2. forty-six divided by seven equals "<<num2<<endl;
	cout<< "3. forty-six modulus seven equals "<<num3<<endl;
	cout<< "4. two times three point oh equals "<<num4<<endl;
	cout<< "5. twenty five divided by four equals "<<num5<<endl;
	cout<< "6. seven point seven five downgraded to int plus two equals "<<num6<<endl;
	cout<< "7. The character P is " <<var7<<endl;
	cout<< "8. The ASCII value 105 is translated to "<<var8<<endl;

	//Max and Min Values
	cout<<"\n\nThe largest 2-byte integer = "<<INT_MAX<<endl;
	cout<<"The smallest 2-byte integer = "<<INT_MIN<<endl;
	cout<<"The largest unsigned int = "<<UINT_MAX<<endl;
	cout<<"The largest 4-byte integer = "<<LONG_MAX<<endl;
	cout<<"The smallest 4-byte integer = "<<LONG_MIN<<endl;
	cout<<"The largest unsigned 4-byte integer = "<<ULONG_MAX<<endl;
	cout<<"The largest float variable = "<<FLT_MAX<<endl;
	cout<<"The smallest float variable = "<<FLT_MIN<<endl;
	cout<<"The largest double float variable = "<<DBL_MAX<<endl;
	cout<<"The smallest double float variable = "<<DBL_MIN<<endl; 




	return 0;
}

