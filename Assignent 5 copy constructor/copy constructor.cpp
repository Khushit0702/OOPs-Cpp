//Assignment 5- Employee detail
// Copy Constructor

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name1, id1, deprt1;
	float bas_sal1, gross_sal, DA, HRA, TA;

public:
	Employee(string name, string id, string deprt, float bas_sal)
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
	Employee(Employee& obj)//Copying constructor storing object of constructor to object obj
	{
		name1 = obj.name1;
		id1 = obj.id1;
		deprt1 = obj.deprt1;
		bas_sal1 = obj.bas_sal1;
		DA = (0.5 * obj.bas_sal1);
		HRA = (0.3 * obj.bas_sal1);
		TA = 01 * obj.bas_sal1;
		gross_sal = obj.bas_sal1 + DA + HRA + TA;
	}

	int printData()// Print function to print employee details
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
{
	string name, id, deprt;
	float bas_sal;
	cout << "Enter Employee's name: " << endl;
	getline(cin >> ws, name);
	cout << "Enter Employee's ID: " << endl;
	getline(cin >> ws, id);
	cout << "Enter Employee's Department: " << endl;
	getline(cin >> ws, deprt);
	cout << "Enter Employee's Basic Salary: " << endl;
	cin >> bas_sal;
	cout << "\n";

	Employee e(name, id, deprt, bas_sal);// Creating obj and passing parameters  to constructor
	Employee e1= e;//copying from one constructor to another
	//Employee e1.(e)
	e.printData();
	cout << "Call to copied constructor" << endl;
	e1.printData();//calling using copied constructor obj
	

	return 0;
}