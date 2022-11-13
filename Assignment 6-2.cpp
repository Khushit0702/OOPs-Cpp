//Assignment 6-2 : Friend class problem

#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name, id, deprt;
	float salary;
public:
	int read()//Taking user's input
	{
		cout << "Enter Employee's name: " << endl;
		getline(cin >> ws, name);
		cout << "Enter Employee's ID: " << endl;
		getline(cin >> ws, id);
		cout << "Enter Employee's Department: " << endl;
		getline(cin >> ws, deprt);
		cout << "Enter Employee's Monthly Salary: " << endl;
		cin >> salary;

		return 0;
	}

	int print() //Print function to print employee details
	{
		cout << "Employee's name: " << name << endl;
		cout << "Employee's ID: " << id << endl;
		cout << "Employee's Department: " << deprt << endl;
		cout << "Employee's Monthly Salary: " << salary << endl;

		return 0;
	}
	friend class sales;//friend class
};

class sales//friend class
{
	int sale;
	float incent;
public:
	int read(Employee ob)//Taking user's input//Accessing class Employee
	{
		
		cout << "Enter sales in month" << endl;
		cin >> sale;
		cout << "\n";
		if (0 <= sale && sale <= 50)
			incent = 0;
		else if (50 < sale && sale <= 100)
			incent = 0.1 * ob.salary;//accessing private member of class Employee
		else if (100 < sale && sale <= 150)
			incent = 0.2* ob.salary;
		else if (150 <= sale)
			incent =0.3* ob.salary;
		else
			cout << "Wrong Input" << endl;
		return 0;
	}

	string performance()//accessiing performance
	{
		if (0 <= sale && sale <= 50)
			return "Poor";
		else if (50 <sale &&  sale <= 100)
			return "Satisfactory";
		else if (100 <sale && sale <= 150)
			return "Good";
		else if (150 <= sale)
			return "Excellent";
		else
			return "Wrong Input";
	}

	int print(Employee ob)
	{
		ob.print();//accessing public member of class Employee
		cout << " Sales in the month: " << sale << endl;
		cout << "Incentive acquired: " << incent << endl;
		cout << "Peformance: " << performance() << endl;

		return 0;
	}
};

int main()
{
	sales s;
	Employee e;

	e.read(); 
	s.read(e);
	s.performance();
	s.print(e);
}

