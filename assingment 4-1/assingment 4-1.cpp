// assingment 4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Electricity board

#include <iostream>
#include<string> //Including string header file
using namespace std;

class consumer//start class
{
    string name,type,mtn;//String name,type,month
    long int num, cmr, lmr;// int - consumer num, current meter reading and last meter reading 
    double amt=0;//amount

public ://public members
    void readData()//Read the user input
    {
        cout << "Enter name :" << endl;
        getline(cin >> ws, name);
        cout << "Enter consumer number: " << endl;
        cin >> num;
        cout << "Enter consumer type: " << endl;
        getline(cin >> ws, type);
        cout << "Enter current meter reading: " << endl;
        cin >> cmr;
        cout << "Enter last meter reading: " << endl;
        cin >> lmr;
        cout << "Enter Bill Month: " << endl;
        getline(cin >> ws, mtn);
       
   }

    void printBill()// prints the bill
    {
        calculatebill();//calling function to calculate the bill
        cout << "Name: " << name<< endl;
        cout << "Consumer number: " << num <<endl;
        cout << "Consumer type: " << type <<endl;
        cout << "Current meter reading: " << cmr<<endl;
        cout << "Last meter reading: " << lmr <<endl;
        cout << "Bill Month: " << mtn <<endl;
        cout << "Amount to be payed: " << amt << endl;
    }

private : //private members
    void calculatebill()//calculates the biill amount
    {
        int unit = cmr - lmr;
        if (type == "Commercial")//calculates bill for commercial member
        {
            if (unit <= 200)
            {
                amt = 5 * unit;
            }
            else
                amt = (5 * 200 + 10 * (unit - 200));
        }
        if (type == "Non-commercial")//calculates bill for non-commercial member
        {
            if (unit <= 100)
            {
                amt = 3 * unit;
            }
            else
                amt = (3 * 100 + 5 * (unit - 100));
        }
    }

};//end class
int main()//start main function
{
    consumer c;//ceating object for class consumer
    c.readData();//calling member function to take inputs
    cout << "\n";
    c.printBill();//calling member function to print the bill
}//end main function


