// Assignment 7-1.cpp : Defining binary operator overloading using friend function
//

#include <iostream>
#include <string>
using namespace std;
class External1;// forward declaration
class Internal1//Internal marks
{
	float math, oop, ds, se; //Variables to store marks
public:
	Internal1(float math1, float oop1, float ds1, float se1)//Parameterized constructor
	{
		math = math1;
		oop = oop1;
		ds = ds1;
		se = se1;
	}

	friend void operator +(Internal1 i,External1 t);//Friend function + operator overloading
};

class External1//External Marks
{
	float math, oop, ds, se;//Variables to store marks
public:
	External1(float math1, float oop1, float ds1, float se1)//parameterized constructor
	{
		math = math1;
		oop = oop1;
		ds = ds1;
		se = se1;
	}

	friend void operator +(Internal1 i, External1 t);//Friend function + operator overloading
};

 void operator + (Internal1 i1, External1 t1)//Operator + overloading , calculating results
{
	 float math = i1.math + t1.math;//Accessing private members of class Internal1 and class External1
	 float oop = i1.oop + t1.oop;
	 float ds = i1.ds + t1.ds;
	 float se = i1.se + t1.se;
	cout << "Total marks in Math: " << math<< "/100" << endl;
	cout << "Total marks in OOP: " <<oop << "/100" << endl;
	cout << "Total marks in DS: " << ds<< "/100" << endl;
	cout << "Total marks in SE: " << se << "/100" << endl;

	int c = 0;
	if (math < 50)
	{
		cout << "Student failed in Maths"<<endl;
		c++;
	}	if (oop < 50)
	{
		cout << "Student failed in OOP" << endl;
		c++;
	}
	if (ds < 50)
	{
		cout << "Student failed in DS" << endl;
		c++;
	}
	if (se < 50)
	{
		cout << "Student failed in SE" << endl;
		c++;
	}

	float total;
	total = i1.math + t1.math + i1.oop + t1.oop + i1.se + t1.se + i1.ds + t1.ds;
	cout << "\nTotal marks: " << total << "/400" << endl;
	cout << "\n";

	if (c == 0)
		cout << "Percentage= " << total / 4 <<"%" << endl;
	else
		cout << "Student failed in " << c << " subject(s). Therefore, cannot print percentage." << endl;
}

int main()
{
	float math = 0.0, oop = 0.0, ds = 0.0, se = 0.0;
	cout << " Enter the marks of Internal (out of 50) for the following subject" << endl;
	cout << "Maths: " << endl;
	cin >> math;
	cout << "OOP: " << endl;
	cin >> oop;
	cout << "DS: " << endl;
	cin >> ds;
	cout << "SE: " << endl;
	cin >> se;
	cout << "\n";
	Internal1 i(math, oop, ds, se);

	cout << " Enter the marks of External (out of 50) for the following subject" << endl;
	cout << "Maths: " << endl;
	cin >> math;
	cout << "OOP: " << endl;
	cin >> oop;
	cout << "DS: " << endl;
	cin >> ds;
	cout << "SE: " << endl;
	cin >> se;
	cout << "\n";
	External1 t(math, oop, ds, se);

	i + t;//Using the operator overloaded
	return 0;
}