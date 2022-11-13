// Statement 2 - Volume of shapes
#include <iostream>
using namespace std;

float volume(float a)// cube, return type - float , argument-float
{
	return (a * a * a);
}

double volume(double r) //sphere,return type - double , argument-double
{
	return ( 3.14 * r * r * r *4/3);
}

double volume(float r, float h)//cylinder,return type - double , argument- float , float
{
	return ( r * r* h*3.14);
}

double volume(double r, double h)//cone,return type - double , argument-double,double
{
	return (3.14 * r * r * (h/3));
}

int main()
{
	float a , r1 , h1 = 0.0;// Initializing variables a ,r1 n h1 as float 
	double r , r2 , h2 = 0.0;// Initializing variables r, r2 n h2 as double 

	cout << "Enter the side of the cube in cm" << endl;
		cin >> a;
	cout << "Volume of cube : " << volume(a)<<endl;//Calling function volume for cube

	cout << "Enter the radius of the sphere in cm" << endl;
	cin >> r;
	cout << "Volume of sphere : " << volume(r)<<endl;//Calling function volume for sphere

	cout << "Enter the radius and height of the cylinder in cm" << endl;
	cin >> r1 >>  h1;
	cout << "Volume of cylinder : " << volume(r1,h1)<< endl;//Calling function volume for cylinder

	cout << "Enter the radius and height of the cone in cm" << endl;
	cin >> r2>> h2;
	cout << "Volume of cone : " << volume(r2, h2)<< endl;//Calling function volume for cone

	cout << "Total volume of the shapes: " << volume(a) + volume(r) + volume(r1, h1) + volume(r2, h2) << endl;//Calculating the total

	return 0;
}
