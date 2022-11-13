//Assingment 5- Employee detail
//Dynamic constructor and destructor

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string* name1;
	string* id1;
	string*deprt1;
	float* bas_sal1, gross_sal, DA, HRA, TA;

public://declaring scope
	Employee(string name, string id, string deprt, float bas_sal)// Dynamic constructor
	{//allocating memory at run time
		name1 = new string;
		*name1 = name;
		id1 = new string;
		*id1 = id;
		deprt1 = new string;
		*deprt1 = deprt;
		bas_sal1 = new float;
		*bas_sal1 = bas_sal;

		DA = (0.5 * bas_sal);
		HRA = (0.3 * bas_sal);
		TA = 01 * bas_sal;
		gross_sal = bas_sal + DA + HRA + TA;

	}
	int printData()// Print function
	{
		cout << "Enter Employee's name: " << name1 << endl;
		cout << "Enter Employee's ID: " << id1<< endl;
		cout << "Enter Employee's Department: " << deprt1 << endl;
		cout << "Enter Employee's Basic Salary: " << bas_sal1<< endl;
		cout << "Enter Employee's Dearness allowance : " << DA << endl;
		cout << "Enter Employee's HRA: " << HRA << endl;
		cout << "Enter Employee's TA: " << TA << endl;
		cout << "Enter Employee's Gross Salary: " << gross_sal << endl;
		cout << "\n";

		return 0;
	}
	~Employee()//Destructor
	{
		delete name1, id1, deprt1, bas_sal1, DA,HRA,TA,gross_sal;
		cout << "Destructor Call Successful";
		cout << "\n";
	}

};

int main()
{//Taking user input 
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

	Employee e(name, id, deprt, bas_sal);//creating object and passing parameters
	e.printData();//Calling member function using object
	// Destructor called made automatically
	return 0;

}