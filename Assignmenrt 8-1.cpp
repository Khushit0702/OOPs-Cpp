// Assignmenrt 8-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//banking System

#include <iostream>
#include<string>
#include<cmath>
using namespace std;

class account//Base class
{
protected:
    string name;
    int acno;
    string type;
    float balance;
public:
    int read()//User input
    {
        cout << "Enter your name: " << endl;
        getline(cin >> ws, name);
        cout << "Enter account number: " << endl;
        cin >> acno;
        cout << "Enter the type of account: " << endl;
        getline(cin >> ws, type);
        cout << "Enter the balance in the account: " << endl;
        cin >> balance;
        return 0;
    }
    int deposit()//depositing amount
    {
        float dep;
        cout << "Enter the amount to be deposited: " << endl;
        cin >> dep;
        balance += dep;
        cout << "Current Balance: " << balance << endl;    

        return 0;
    }
    int withdraw()//withdrawing amount
    {
        float wamt;
        cout << "\nEnter the amount you want to withdraw: " << endl;
        cin >> wamt;
        if (balance >= wamt)
        {
            balance = balance - wamt;
            cout << "Current Balance: " << balance;
        }
        else
            cout << "Balance is not enough." << endl;

        return 0;
    }
};

class sav_acct : public account//Savings amount (child class), base class- account
{
    float cp,years, rate=5;

public:
    int compound()//calculating amount after compounding
    {
        cout << "\nCompount Interest :" << endl;
        cout <<"Enter no.of years: " << endl;
        cin >> years;
        cout << "Rate of interest per annum: " << rate << endl;
        
         balance= balance* pow((1 + (rate / 100)),years);
       
        cout << "Balance after compounding: " << balance<< endl;

        return 0;
    }
};
    class cur_acct : public account//Current account- child class, base class- account
    {
        float minamt=500.0;
        double sc;
    public:
        int min()//Checking for minimum account
        {
            if (balance < minamt)
            {
                sc = 0.05 * (minamt - balance);//Calculating sercive charge if defaulted
                cout << "Balance is less than minimum amount.\nService charges:  " << sc<<endl;
                balance = balance - sc;
                cout << "Current balance: " << balance<< endl;
            }
            else
                cout << "No default" << endl;
            return 0;
        }
        int checkbk()//check book facility
        {
            cout << "Check book available: " << endl;
            cout << "Name of check book holder: " << name << endl;
            cout << "Account No: " << acno << endl;

            return 0;
        }
    };
int main()
{
    string acct;
    cout << "Enter the type of account you want to access:" << endl;
    getline(cin >> ws, acct);
    if (acct == "Savings")
    {
        sav_acct s;
        s.read();
        s.deposit();
        s.compound();
        s.withdraw();
    }
    if (acct == "Current")
    {
        cur_acct c;
        c.read();
        c.deposit();
        c.checkbk();
        c.min();
        c.withdraw();
    }
}



