// Assignmet 8-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Inheritance

#include <iostream>
#include<string>
using namespace std;

class staff//Base class
{
protected:
    int c;
    string n;
public:
    void read()
    {
        cout << "\nEnter code : "<<endl;
        cin >> c;
        cout << "Enter name : "<<endl;
        getline(cin>>ws,n);
    }
    void display()
    {
        cout << "\nCode : " << c<<endl;
        cout << "Name : " << n<<endl;
    }
};

class teacher : public staff//Child class-tecaher,base class-staff
{
protected:
    string sub;
    string pub;
public:
    void tread()
    {
        read();//accessing read function from the base class
        cout << "Enter subject : "<<endl;
        getline(cin>>ws,sub);
        cout << "Enter publication : " << endl;
        getline(cin >> ws, pub);
        
    }
    void tdisplay()
    {
        display();//accessing display function from the base class
        cout << "Subject : " << sub<<endl;
        cout << "Publication : " << pub<<endl;
    }
};

class officer : public staff//Child class-officer,base class-staff
{
protected:
    string g;
public:
    void oread()
    {
        read();//accessing read function from the base class
        cout << "Enter grade : "<<endl;
        cin >> g;
    }
    void odisplay()
    {
        display();//accessing display function from the base class
        cout << "Grade : " << g<<endl;
    }
};

class typist :public staff//Child class-typist,base class-staff
{
protected:
    double speed;
public:
    void tyread()
    {
        read();//accessing read function from the base class
        cout << "Enter speed : " << endl;
        cin >> speed;
    }
    void tydisplay()
    {
        display();//accessing display function from the base class
        cout << "Speed: " << speed<<endl;
    }
};

class regular : public typist//Child regular,base class-typist,grandparent class-staff
{
protected:
    double sal;
public:
    void rread()
    {
        tyread();// accessing tyread function from the base class
        cout << "Enter monthly salary : "<<endl;
        cin >> sal;
    }
    void rdisplay()
    {
        tydisplay();// accessing tydisplay function from the base class
        cout << "Salary : " << sal<<endl;
    }
};

class casual : public typist//Child casual,base class-typist,grandparent class-staff
{
protected:
    double wage;
public:
    void cread() 
    {
        tyread();// accessing tyread function from the base class
        cout << "Enter daily wages : "<<endl;
        cin >> wage;
    }
    void cdisplay()
    {
        tydisplay();// accessing tydisplay function from the base class
        cout << "Wage : " << wage<<endl;
    }
};

int main()
{
    int s;
    for (int i = 0;i < 4;i++)//For loop to choose all the options
    {
        cout << "\nSelect type of employee: \n1. Teacher\n2.Officer\n3.Typist\n" << endl;
        cin >> s;
        switch (s)//Switch case to decide type of employee
        {
        case 1:
        {
            cout << " Teacher:" << endl;
            teacher t;
            t.tread();
            t.tdisplay();
            break;
        }
        case 2:
        {
            cout << "Officer:" << endl;
            officer o;
            o.oread();
            o.odisplay();
            break;
        }
        case 3:
        {
            cout << " Typist:" << endl;
            int s1;
            cout << "Select type of typist: \n1. Regular typist\n2.Casual typist" << endl;
            cin >> s1;
            switch (s1)//Switch case to decide type of typist
            {
            case 1:
            {
                cout << "Regular Typist:" << endl;
                regular r;
                r.rread();
                r.rdisplay();
                break;
            }
            case 2:
            {
                cout << " Casual Typist:" << endl;
                casual c;
                c.cread();
                c.cdisplay();
                break;
            }
            default:
                cout << "Wrong input" << endl;
                break;
            }
        }
        }
    }
}
