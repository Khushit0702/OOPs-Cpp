// Assignment 3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3-2: Average Marks of a class using new and delete operators on array

#include <iostream>
using namespace std;

double avg(double a1[],int n)//Funct to calculate average of marks
{
    double sum=0.0;
    for (int i = 0; i < n; i++)
    {
        sum  =  a1[i]+sum;//storing the summation of marks
    }
  
    return (sum / n);//returning the average value
}

int main()
{
    int x;
    cout << "Enter number of sttudents in the class"<< endl;
    cin >> x;//Taking user's input
    double *a = new double[x]; //dynamically allocating memory to array 

    cout << "Enter the marks of each student" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> *(a+ i);//inputing marks
    }

    double avrg = avg(a,x);//callling avg fuct
    cout << "The average marks of the students is : " << avrg << endl;//printing average marks

    delete[] a;// deleting dynamically allocated array
}

