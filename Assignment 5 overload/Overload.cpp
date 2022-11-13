//Assignment 5- Employee detail
//Overloading Constructor

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name1, id1, deprt1;
	float bas_sal1, gross_sal, DA, HRA, TA;
	double bas_sal2;
public://Declaring scope
	Employee(string name, string id, string deprt, float bas_sal)//Constructor with float value 
	{
		name1 = name;
		id1 = id;
		deprt1 = deprt;
		bas_sal1 = bas_sal;
		DA = (0.5 * bas_sal);
		HRA = (0.3 * bas_sal);
		TA = 01 * bas_sal;
		gross_sal = bas_sal + DA + HRA + TA;

	}
	Employee(string name, string id, string deprt, double bas_sal)//constructor with double value
	{
		name1 = name;
		id1 = id;
		deprt1 = deprt;
		bas_sal1 = bas_sal;
		DA = (0.5 * bas_sal);
		HRA = (0.3 * bas_sal);
		TA = 01 * bas_sal;
		gross_sal = bas_sal + DA + HRA + TA;
	}

	int printData() //Print function to print employee details
	{
		cout << "Enter Employee's name: " << name1 << endl;
		cout << "Enter Employee's ID: " << id1 << endl;
		cout << "Enter Employee's Department: " << deprt1 << endl;
		cout << "Enter Employee's Basic Salary: " << bas_sal1 << endl;
		cout << "Enter Employee's Dearness allowance : " << DA << endl;
		cout << "Enter Employee's HRA: " << HRA << endl;
		cout << "Enter Employee's TA: " << TA << endl;
		cout << "Enter Employee's Gross Salary: " << gross_sal << endl;
		cout << "\n";

		return 0;
	}

};

int main()
{//Taking user input
	string name, id, deprt;
	float bas_sal;
	double bas_sal1;
	cout << "Enter Employee's name: " << endl;
	getline(cin >> ws, name);
	cout << "Enter Employee's ID: " << endl;
	getline(cin >> ws, id);
	cout << "Enter Employee's Department: " << endl;
	getline(cin >> ws, deprt);
	cout << "Enter Employee's Basic Salary: " << endl;
	cin >> bas_sal;
	
	cout << "To call 2nd constructor \n Enter Employee's Basic Salary: " << endl;//Storing double value
	cin >> bas_sal1;
	cout << "\n";

	Employee e(name, id, deprt, bas_sal);//Call to constructor with float value
	Employee e1(name, id, deprt, bas_sal1);//Call to constructor with double value
	e.printData();//Call to print function using 1st obj
	cout << "Call to second constructor" << endl;
	e1.printData();//call to print funct using 2nd object
}