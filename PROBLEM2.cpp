#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double a, b;
	cout << "THIS PROGRAM COMPUTES YOUR WATER BILL" <<endl;
	cout << "Enter the amount of your unpaid balance: "; 
	cin >> a;
	cout << "Enter the meter readings in gallon: "; 
	cin >> b;

	if (a > 0)
	{
		cout << "You have unpaid balance, thus P20 late charge is assessed" << endl;
		cout << "Your water bill in peso, including the unpaid balance is: " << 1.10*b + 55 + a << endl;
	}
	else
	{
		cout << "You do not have unpayed balance, thus, non late charge is assessed" << endl;
		cout << "Your water bill in peso is: " << 1.10*b + 35 << endl;
	}

	_getch();
	return 0;
}