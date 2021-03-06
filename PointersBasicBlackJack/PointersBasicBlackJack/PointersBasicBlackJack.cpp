#include "stdafx.h"
#include "cctype"
#include "iostream"
#include "stdlib.h"
#include "ctime"
#include "vector"
#include "algorithm"
#include "string"
#include "cctype"
using namespace std;

//creating extra functions
int draw(int *draw1, int *draw2);

//creating main function
int main()
{
	//generating random integers for card draw
	srand(static_cast<unsigned int>(0));

	//initializing variables
	int draw1 = 0;
	int draw2 = 0;
	int menu = 0;

	do
	{
		cout << "Press 1 to draw cards.\n";
		cout << "Press 2 to exit program (for now).\n";
		cin >> menu;
		cout << "================================================================================\n\n";

		if (menu == 1)
		{
			//calling extra function
			//using & defines the address of the variable
			draw(&draw1, &draw2);
			cout << "the values are " << draw1 << " and " << draw2 << ".\n";
			cout << "================================================================================\n\n";
		}
		else if (menu == 2)
		{
			cout << "Come back soon!";
			exit(0);
		}
		else
		{
			cout << "Please provide a valid input.\n";
		}

	} while (menu != 2);

    return 0;
}

//defining extra functions
//using * manipulates the information at the address of the variable
int draw(int *draw1, int *draw2)
{

	*draw1 = rand() % 10 + 1;
	*draw2 = rand() % 10 + 1;

	//passing pointer variables back to main for use in the rest of the program
	return *draw1, *draw2;
}