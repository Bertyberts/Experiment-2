#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	int x, y;
	double z = 2.5;
	cout << "THIS PROGRAM COMPUTES THE VALUE OF V USING 5 DIFFERENT EQUATIONS" << endl;
	while (1) {
		cout << setprecision(2) << fixed;
		cout << "Input the value of x: "; 
		cin >> x;
		cout << "Input the value of y: "; 
		cin >> y;

		switch (x)
		{
		case 1:
			if (1 < y && y < 5)
				cout << setw(10) <<"The value of V is: " << x*y*z << endl;
			else if (y >= 5)
				cout << setw(10) <<"The value of V is: " << x + y / z << endl;
			else
				cout << setw(10) <<"The value of V is: " << x + y + z << endl;
			break;
		case 2:
			if (y <= 5)
				cout << setw(10) <<"The value of V is: " << abs((x - y) / z) << endl;
			else
				cout << setw(10) <<"The value of V is: " << x - sqrt(y + z) << endl;
			break;
		default:
			cout << setw(10) << "The value of V is: " << x + y + z << endl;
		}
	}
	_getch();
	return 0;
}












