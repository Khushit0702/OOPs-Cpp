//Assignment 6-1 : Friend function problem

#include <iostream>
#include <string>
using namespace std;

class TEE;// forward declaration
class ICA 
{
	float math, oop, ds, se; //Variables to store marks
public:
	int read()//taking users input 
	{
		cout << " Enter the marks of ICA(out of 50) for the following subject" << endl;
		cout << "Maths: " << endl;
		cin >> math;
		cout << "OOP: " << endl;
		cin >> oop;
		cout << "DS: " << endl;
		cin >> ds;
		cout << "SE: " << endl;
		cin >> se;
		cout << "\n";
		return 0;
	}

	friend int result(ICA i, TEE t);//Friend function
};

class TEE
{
	float math, oop, ds, se;//Variables to store marks
public:
	int read()//taking users input 
	{
		cout << " Enter the marks of ICA(out of 50) for the following subject" << endl;
		cout << "Maths: " << endl;
		cin >> math;
		cout << "OOP: " << endl;
		cin >> oop;
		cout << "DS: " << endl;
		cin >> ds;
		cout << "SE: " << endl;
		cin >> se;
		 
		cout << "\n";
		return 0;
	}

	friend int result(ICA i, TEE t);//Friend function
};

int result(ICA i1, TEE t1)//global friend dunction
{
	
	float total;
	total = i1.math + t1.math + i1.oop + t1.oop + i1.se + t1.se + i1.ds + t1.ds;//Accessing private members of class ICA and class TEE

	cout << "Total marks in Math: " << i1.math + t1.math << "/100" << endl;
	cout << "Total marks in OOP: " << i1.oop + t1.oop << "/100" << endl;
	cout << "Total marks in DS: " << i1.ds + t1.ds << "/100" << endl;
	cout << "Total marks in SE: " << i1.se + t1.se << "/100" << endl;
	cout << "Total marks: " << total << "/400" << endl;
	cout << "\n";
	return 0;

}

int main()
{
	ICA i;
	TEE t;
	i.read();
	t.read();
	
	result(i, t);//Calling friend function
	return 0;
}