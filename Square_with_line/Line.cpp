#include "Line.h"


Line::Line(int _X, int _Y, int _R)
{
	X1 = _X;
	Y1 = _Y;
	R = _R;
	X2 = X1;
	Y2 = Y1 - R;
}

void Line::draw()
{
	cout << "draw Line: \n";
	cout << "-------------------\n";
	cout << "First point: (" << X1 << "," << Y1 << ")\n";
	cout << "Second point: (" << X2 << "," << Y2 << ")\n";
	cout << "-------------------\n";
}