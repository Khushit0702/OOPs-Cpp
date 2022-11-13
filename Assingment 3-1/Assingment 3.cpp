// Assingment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Statement -1 : conversion yards to feet and inches 

#include <iostream>
using namespace std;

double conft(double i1)//Conversion of inches to feet
{
    return (i1 / 12);
}

double cony(double i2)//cpnversion of inches to yards
{
    return (i2 / 36);
}
int main()
{
    double* i = new double;//Dynamic allocation used to store inches , new operator
    double* f = new double;//Dynamic allocation used to store  feet, new operator
    double* y = new double;//Dynamic allocation used to store yards, new operator

    cout << " Enter inches to be converted to feet and yards" << endl;
    cin >> * i;//Taking user's input 

   * f = conft(*i);//Calling fucnt to convert inches to feet 
    *y = cony(*i);//Calling fucnt to convert inches to yards

    cout << *i << " inches to feet = " << *f << endl;//printing the value in feet 
    cout << *i << " inches to yards = " << *y << endl; //printing the value in yard
   
    delete i ,f ,y;// Deleting the dynamic allocated values,delete operator
   
}


