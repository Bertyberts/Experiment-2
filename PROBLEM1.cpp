#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	char a;
	cout << "THIS PROGRAM CALCULATES YOUR MONTHLY INTERNET BILL" << endl;
	cout << "Enter your package, choose between package A, B, or C: "; cin >> a;
	switch (a)
	{
	case 'a':
	case 'A':
		cout << "Enter your internet usage in hours: ";
		cin >> n;
		cout << "Your monthly bill in peso is: " <<  995 + 20*(n-10) ; 
		break;
	case 'b':
	case 'B':
		cout << "Enter your internet usage in hours: ";
		cin >> n;
		cout << "Your monthly bill in peso is: " << 1495 + 10*(n-20);
		break;
	case 'c':
	case 'C':
		cout << "your monthly bill in peso is: 1995" << endl;
		break;
	default: 
		cout << "You must choose between A, B and C only!" << endl;
	}
		_getch();
		return 0;
	}