// Assingment 2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Min Max numbers

#include <iostream>;
using namespace std;

double max(double (*arr))// MAX funtion taking arguments as pointer to array and size n
{
	double mx = arr[0]; //mx is the first value in array
	for (int i = 0;i < 10;i++)
	{
		if (mx < arr[i])
			mx = arr[i];//If the number is greater than max store it in the mx variable
	}
	return mx;//return value in mx
}

double min(double(*arr))// MIN funtion taking arguments as pointer to array and size n
{
	double mn = arr[0];//mn is the first value in array
	for (int i = 0;i < 10;i++)
	{
		if (mn > arr[i])
			mn = arr[i];//If the number is lesser than max store it in the mx variable
	}
	return mn;//return value in mn
}

int main()
{
	double arr[10];//Declaring an array on size 10
	cout << "Enter the marks of 10 students \n ";
	for (int i = 0; i < 10;i++)
		cin >> arr[i];

	cout << " Maximum marks :" << max(arr)<<endl;//Calling max function by passing array 
	cout << " Minimum marks :" <<  min(arr);//Calling min function by passing array 
	return 0;
}