#include "stdafx.h"
#include "graphics.h"
#include <iostream>

using namespace std;

int main()
{
	// Declare variables
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	// Initialize the coordinates from current console.
	initgraph();

	// Set color and position for the output text.
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
	outtextxy(100, 100, (char*)"Hello World");

	// Wait for the next input from user.
	cin.get();

	// Close program with no errors.
    return 0;
}