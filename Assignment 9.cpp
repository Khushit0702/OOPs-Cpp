// Assignment 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Hybrid Inheritance:Insurance

#include <iostream>
#include<string>
using namespace std;

class Account//class account
{
     string ad;
    int acno;

public:
    string name;
    float bal;
    int age;
   void openaccount()//opening acc and taking details
    {
       cout << "Enter Name of the customer: " << endl;
       getline(cin >> ws, name);
       cout << "Enter Address: " << endl;
       getline(cin >> ws, ad);
       cout << "Enter Age: " << endl;
       cin >> age;
       cout << "Enter Account No: " << endl;
       cin >> acno;
       cout << "Enter Initial Balance: " << endl;
       cin >> bal;
    }

    void withdraw(float w)//withdrawing money , parameter float w
    {
        if (bal > w)
            bal = bal - w;
        else
            cout << "Not enough balance." << endl;

        cout << "Current Balance: " << bal << endl;
    }

    void deposit(float d)//depositing money ,float d=amt (parameter)
    {
        bal = bal + d;
        cout << "Current Balance: " << bal << endl;
    }

    void displayacc()//displaying info
    {
        cout << "\nName of the customer: " <<name<< endl;
        cout << "Address: " <<ad<< endl;       
        cout << "Age: " <<age<< endl;
        cout << "Account No: " << acno<<endl;   
        cout << "Balance: " <<bal<< endl;
    }
};

class life : virtual public Account//using virtual inheritance
{
    float prem,tprem=0;//premium = prem, total premium = tprem
public: 
    float sum;
    int polno, term;
    void readl()
    {
        cout << "\nEnter policy number: " << endl;
        cin >> polno;
        cout << "Enter policy term period: " << endl;
        cin >> term;
        cout << "Enter Sum assured in lakhs: " << endl;
        cin >> sum;
    }

    void calculatel()//calculating premium amt
    {
        if (age <= 25)
                prem = 3000 * sum;
        if (26 <= age <= 45)
            prem = 4000 * sum;
        if (46 <= age <= 60)
            prem = 5000 * sum;
        else
            cout << "No Insurance available" << endl;
    }

    void deductl()//deducting for account
    {
        int n=1,term1;
        term1 = term;
        while (term1 > 0)
         {
            tprem += prem;
            cout << "\nDeduction term: " << n++ << endl;
            withdraw(prem);
            term1 = term1 - 1;
         }
    }

    void displayl()//displaying details
    {
        cout << "\nPolicy number: " << polno<<endl;       
        cout << "Policy term period: " <<term<< endl;
        cout << "Sum assured in lakhs: " << sum<<endl;
        cout << "Total Premium amount after the end of the term: " << tprem<<endl;
        cout << "Balance: " << bal<<endl;
    }
};

class car : virtual public Account//inheriting from account virtually
{
    int polno,cara;
    float  prem,tprem=0;
    string carn;
public :
    int term;
    void read()
    {
        cout << "\nEnter policy number: " << endl;
        cin >> polno;
        cout << "Model and brand of the car: " << endl;
        getline(cin >> ws, carn);
        cout << "How old is the car: " << endl;
        cin >> cara;
        cout << "Enter policy term period: " << endl;
        cin >> term;
        cout << "Price of the car on which insurance is calculated: 8 Lakhs" <<endl;
    }

    void calculate()//calculating premium
    {
        if (cara < 2)
            prem = 5000 * 8;
        if (2 <= cara <= 4)
            prem = 3000 * 8;
        if (5 <= cara <= 7)
            prem = 2000 * 8;
    }

    void deduct()//deducting from account
    {
        int n = 1, term1;
        term1 = term;
        while (term1 > 0)
        {
            tprem += prem;
            cout << "\nDeduction term: " << n++ << endl;
            withdraw(prem);
            term1 = term1 - 1;
        }
    }

    void display()//displaying info
    {
        cout << "\nPolicy number: " << polno<<endl;
        cout << "Name of the customer: " << name<<endl;
        cout << "Model and brand of the car: " <<carn<< endl;
        cout << "How old is the car: " <<cara<< endl;
        cout << "Policy term period: " << term<<endl;
        cout << "Price of the car on which insurance is calculated: 8 Lakhs" << endl;
        cout << "Total Premium amount after the end of the term: " << tprem << endl;
        cout << "Balance: " << bal << endl;
    }
};

class claim: public life,public car//inheriting fromm life and car(multiple inheritance
{
public:
    void settlement(int c)
    {
        switch (c)
        {
        case 1:
        {
           int terml = life::term;//accessing data member term in class life
           float sum1 = life::sum;//accessing data member sum in class life
        cout << "\nPeriod within which policy was closed pre-maturely: " << terml << endl;
        if (terml <= 5)
            cout << "Zero amount: " << endl;
        else if (5 < terml <= 12)
            deposit(0.5 * sum1 * 100000);
        else if (12 < terml <= 20)
            deposit((0.5 + 0.2) * sum1 * 100000);
        else if  (20 < terml )
            deposit(2 * sum1 * 100000);
        break;
        }
       
        case 2:
        {
            float amt;
            cout << "Enter the reparing cost: " << endl;
            cin >> amt;
            deposit(amt);
            break;
        }
    default:
        cout << "Invalid" << endl;
            break;
        }
    }
    
};

int main()
{
    claim obj;
    obj.openaccount();
    obj.displayacc();
    int c;

    cout << "Enter the type of policy: \n1.Life\n2.Car" << endl;
    cin >> c;
    if (c == 1)
    {
        int c1;
        cout << "Calculate : \n1.Premium\n2.Settlement Amount" << endl;
        cin >> c1;
        if (c1 == 1)
        {
            obj.readl();
            obj.calculatel();
            obj.deductl();
            obj.displayl();
        }
        if (c1 == 2)
        {
            obj.readl();
            obj.settlement(c);
        }
        
    }

    else if (c == 2)
    {
        int c1;
        cout << "\nCalculate : \n1.Premium\n2.Settlement Amount" << endl;
        cin >> c1;
        if (c1 == 1)
        {
            obj.read();
            obj.calculate();
            obj.deduct();
            obj.display();
        }
        if (c1 == 2)
        {
            obj.read();
            obj.settlement(c);
        }

    }
}


