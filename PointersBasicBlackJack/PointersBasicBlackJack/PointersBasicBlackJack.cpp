#include "stdafx.h"
#include "cctype"
#include "iostream"
#include "stdlib.h"
#include <ctime>
using namespace std;

//creating extra functions
int draw(int *draw1, int *draw2);

//creating main function
int main()
{
	//initializing variables
	int draw1 = 0;
	int draw2 = 0;

	//calling extra function
	//using & defines the address of the variable
	draw(&draw1, &draw2);
	cout << "the values are " << draw1 << " and " << draw2 << ".\n";
	system("pause");

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