#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout << "THIS PROGRAM GENERATES THE SUM OF ALL WHOLE NUMBERS STARTING FROM 1 UP TO A GIVEN NUMBER" << endl;
	
	int a, counter, sum, previous_sum;
	previous_sum = 0;
	sum = 0;
	cout << "Enter a number: "; cin >> a;

	while(a>0)
	{
		previous_sum = 0;
		sum = 0;
		for (counter = 1; counter <= a; counter++)
		{
			sum = previous_sum + counter;
			previous_sum = sum;
		}
		cout << "The sum of all whole numbers from 1 to " << a << " is " <<sum << endl;
		cout << "Enter a number: "; cin >> a;
	}
	cout << "Thank you!" << endl;

	_getch();
	return 0;
}