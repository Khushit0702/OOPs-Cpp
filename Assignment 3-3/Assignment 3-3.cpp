// Assignment 3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Statement 3 - Volume of shapes
#include <iostream>
using namespace std;

inline double cube(double a)//volume of cube
{
	return (a * a * a);
}

inline double sphere(double r) //volume of sphere
{
	return (3.14 * r * r * r * 4 / 3);
}

inline double cylinder(double r, double h)//volume of cylinder
{
	return (r * r * h * 3.14);
}

inline double cone (double r, double h)//volume of cone
{
	return (3.14 * r * r * (h / 3));
}

int main()
{

	cout << "Volume of cube with side 2 cm : " << cube(2) << endl;//Calling function volume for cube

	cout << "Volume of sphere with radius 10 cm: " << sphere(10) << endl;//Calling function volume for sphere

	cout << "Volume of cylinder with radius as 10 cm and  height as 20 cm  : " << cylinder(10,20) << endl;//Calling function volume for cylinder
	
	cout << "Volume of cone with radius as 5 cm and  height as 10 cm   : " << cone(5,10) << endl;//Calling function volume for cone

	cout << "Total volume of the shapes: " << cube(2) + sphere(10) + cylinder(10,20) + cone(5, 10) << endl;//Calculating the total

	return 0;
}
