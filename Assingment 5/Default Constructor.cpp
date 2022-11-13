//Assignment 5- Employee detail
//Default constructor

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name, id, deprt;
	float bas_sal, gross_sal,DA,HRA,TA;

public://declaring scope
	Employee()//Default constructor 
	{
		name = "Khushi Tulsian";
		id = "KTA086";
		deprt = "Science";
		bas_sal = 1000;
		DA = (0.5 * bas_sal);
		HRA = (0.3 * bas_sal);
		TA = 01 * bas_sal;
		gross_sal = bas_sal + DA + HRA + TA;
	}

	int printData()// Print function to print employee details
	{
		cout << "Enter Employee's name: " << name << endl;
		cout << "Enter Employee's ID: " << id << endl;
		cout << "Enter Employee's Department: " << deprt << endl;
		cout << "Enter Employee's Basic Salary: " << bas_sal << endl;
		cout << "Enter Employee's Dearness allowance : " << DA << endl;
		cout << "Enter Employee's HRA: " << HRA<< endl;
		cout << "Enter Employee's TA: " << TA << endl;
		cout << "Enter Employee's Gross Salary: " << gross_sal << endl;
		cout << "\n";

		return 0;
	}

};

int main()
{
	Employee e;//creating object and constructor call
	e.printData();//Calling member function using object
	return 0;
}