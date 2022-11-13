// Assignment 7-2.cpp : Doctor and area

#include <iostream>
#include<string>
using namespace std;

class doctor
{
public:
    string name, area;

    int read()
    {

        cout << "Enter Doctor's name: " << endl;
        getline(cin, name);

        cout << "Enter Area: " << endl;
        getline(cin, area);

        return 0;
    }

   void print()
   {
        cout << "Doctor's name: " << name << endl;
        cout << "Doctor's area: " << area << endl;
    }
    friend bool operator < (doctor d, doctor d1);//Friend function operator overlooading
};

bool  operator < (doctor d1, doctor d2)//Operator overloading
{
    if (d2.area < d1.area)//Comparing area name alphabetically and returning boolean value
        return true;
    else
        return false;
}

int main()
{
    doctor d[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        d[i].read();
    }

    doctor temp;//Temporary variable
    for (int k = 0; k < 5; k++)//sorting algorithm
    {
        for (int m = 0; m < 4; m++)
        {
            if (d[m + 1] < d[m])
            {
                temp = d[m];
                d[m] = d[m + 1];
                d[m + 1] = temp;
            }
        }
    }

    cout << "\nSorted by area" << endl;
    for (int k = 4; k >= 0; k--)//Print loop
    {
        d[k].print();	//Calling print function
        cout << "\n";
    }
}
