
//Name: Ayesha Khan 
// This program calculate the sum and subtraction of two numbers.

#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter a ist integer:";
	cin >> num1;
	cout << endl;
	cout << "Enter second integer:";
	cin >> num2;
	cout << endl;

	int sum, sub;

	sum = num1 + num2;
	sub = num1 - num2;

	cout << "The sum of the numbers is: " << sum << endl;
	cout << "Subtraction of the numbers is:" << sub << endl;
	return 0;
}
