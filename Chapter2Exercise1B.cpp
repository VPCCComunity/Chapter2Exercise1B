/*
File Name:Chapter2Exercise1B.cpp
Programmer: Mark Goldstein
Date: February 2025
Requirements:
 Sum of Two Numbers  Write a program that stores the integers 50 and 100 in variables, 
 and stores the sum of these two in a variable named sum.
 Display the result the console.

 Revision:
 Allow user to determine what numbers are to be added.


*/

#include <iostream>
using namespace std;


int main()
{
	int number1;
	int number2;
	int sum; 
	cout << "Please enter your first number: ";
	cin >> number1;
	cout << "Please enter your second number: ";
	cin >> number2;

	sum = number1 + number2;
	cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;
}

