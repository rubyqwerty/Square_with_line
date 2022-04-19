#include "Line.h"

Line::Line(int _X, int _Y, int _R , COLORREF _ColorLine)
{
	X = _X;
	Y = _Y;
	R = _R;
	ColorLine = _ColorLine;
}

void Line::draw()
{
	pen = CreatePen(PS_SOLID, 2, ColorLine);
	
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

void Line::move(int _X, int _Y)
{
	Figure::move(_X, _Y);
}