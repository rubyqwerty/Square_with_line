#include "Square.h"

Square::Square(int _X, int _Y, int _R)
{
	R = _R * 2;
	X1 = _X - R / 2;
	Y1 = _Y - R / 2;
	X2 = X1 + R;
	Y2 = Y1 + R;
};

void Square::draw()
{
	cout << "draw Squar: \n";
	cout << "-------------------\n";
	cout << "First point: (" << X1 << "," << Y1 << ")\n";
	cout << "Second point: (" << X2 << "," << Y2 << ")\n";
	cout << "-------------------\n";
}