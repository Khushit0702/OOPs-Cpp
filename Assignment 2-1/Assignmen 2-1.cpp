//Assingment 2-1 - addition of different datatypes-short  int, float, double, long double, long int, char.

#include<iostream>
using namespace std;

short int add(short int a1, short int b1)// data type of short int
{
	return a1 + b1;
} 

long int add(long int a1,long  int b1)// data type of long int
{
	return a1 + b1;
}

double add(double a1, double b1)//data type of double
{
	return a1 + b1;
}

long double add(long double a1, long double b1)//data type of long double
{
	return a1 + b1;
}

float add(float a1, float b1)//data type of float
{
	return a1 + b1;
}

char add(char a1, char b1) //data type of character
{
	return a1 + b1;
}

int main()
{
	 short int c = 200, d = 600;
     cout << " The addition of entered data " << c<< " and " <<d << " is: " << add(c, d)<< endl;//calling fuction short int add()
	
	 long int c1 = 2550, d1 = 6550;
	 cout << " The addition of entered data " << c1 << " and " << d1 << " is: " << add(c1, d1)<<endl;//calling fuction long int add()

	 cout << " The addition of 2.87348 and 4.48586 is: " << add(2.87348, 4.48586) << endl;//Calling function double add() passign constant value;

	 long double c2 = 2550.57967, d2 = 6550.39479579;
	 cout << " The addition of entered data " << c2 << " and " << d2 << " is: " << add(c2, d2) << endl;//calling fuction long double add()

	 float c3 = 6.55F , d3 = 5.45F ;
	 cout << " The addition of entered data " << c3 << " and " << d3 << " is: " << add(c3, d3) << endl;//calling fuction long double add()
	
	 char a = 'a'; char b = 'f';
	cout << " The addition of entered data " << a << " and " << b <<" is: "  << add(a, b) << endl;//calling fuction char add()

	return 0;
}