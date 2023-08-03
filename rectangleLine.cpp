// C program to draw a rectangle
#include<iostream>
#include <graphics.h>
using namespace std;

// Driver code
int main()
{
	// gm is Graphics mode which is a computer display
	// mode that generates image using pixels.
	// DETECT is a macro defined in "graphics.h" header file
	int gd = DETECT, gm;

	// location of left, top, right, bottom
	int left, top, right, bottom;
	cout<<"enter left, top, right, bottom : ";
	cin>>left;
	cin>>top;
	cin>>right;
	cin>>bottom;

	// initgraph initializes the graphics system
	// by loading a graphics driver from disk
	initgraph(&gd, &gm, "");

	// rectangle function
	rectangle(left, top, right, bottom);

	getch();

	// closegraph function closes the graphics
	// mode and deallocates all memory allocated
	// by graphics system .
	closegraph();

	return 0;
}

