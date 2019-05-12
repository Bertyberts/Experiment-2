#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout << "THIS PROGRAM OUTPUTS THE NEXT 20 FIBONACCI NOS. AFTER 0 AND 1" << endl;
	int counter, previous_number, current_number, a, b, z;
	previous_number = 0;
	current_number = 1;
	cout << previous_number << "," ;
	cout << current_number << "," ;

	
	for (counter = 0; counter < 20; counter++)
	{
	a = previous_number;
	b = current_number;
	z = a + b;

	if (counter >= 19)
		cout << z;
	else
		cout << z << ",";
	current_number=z;
	previous_number=b;
	}
		_getch();
		return 0;
}