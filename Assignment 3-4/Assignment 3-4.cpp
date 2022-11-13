// Assignment 3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void INPUT(string n[], int r[], char c = 'A', string p = "B.Tech CSBS"); // char c and string p are default arguments of funct INPUT

int main()
{ 
	string n[3];
	int r[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "Enter Student's name" << endl;
		getline(cin >> ws, n[i]);//Taking user's input

		cout << "Enter Student's roll number" << endl;
		cin >> r[i];//Taking user's input
		cout << "\n";
	}
   INPUT(n, r); // Calling IINPUT function by passing parameter inputted by user
}

void INPUT(string  n[], int r[], char c, string p)
{
	cout << "\nThe list of students is as follows : " << endl;//Printing the list of students
	for (int i = 0;i < 3;i++)
	{
		cout << "Student's Name: " << n [i]<< endl;
		cout << "Student's Roll No: " << r [i]<< endl;
		cout << "Student's Division: " << c << endl;
		cout << "Student's Program: " << p << endl;
		cout << "\n" ;
	}
 }

