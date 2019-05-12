#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x;
	cout << "THIS PROGRAM COUNTS NUMBERS FROM 1-10, UPON REACHING 10, IT COUNTS BY TWO'S UNTIL IT TEACHES 30" << endl;
	for(x=1; x<=30;)
	{
		if (x >= 30)
			cout << x;
		
		else
			cout << x << ",";
		
		if (x >= 10)
			x = x + 2;
		
		else
			x = x+1;


	}
	_getch();
	return 0;
}