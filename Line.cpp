#include "Line.h"

Line::Line(int _X, int _Y, int _R)
{
	X = _X;
	Y = _Y;
	R = _R;
}

void Line::draw()
{
	if (X <= rt.left)
		throw Border("Line ", "exit on the left");

	if (X >= rt.right)
		throw Border("Line ", "exit on the right");

	if (Y - R <= rt.top)
		throw Border("Line ", "exit from the top");

	if (Y  >= rt.bottom)
		throw Border("Line ", "exit from the bottom");

	pen = CreatePen(PS_SOLID, 2, RGB(255, 162, 0));
	
	SelectObject(hdc, pen);

	POINT points[] = { {X, Y} , {X , Y - R} };

	Polygon(hdc, points, 2);

	DeleteObject(pen);
}

void Line::hide()
{
    RECT rct = { X - 1 , Y + 1, X + 1, Y - R };
	InvalidateRect(hwnd, &rct, 1);
}

