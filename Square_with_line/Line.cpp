#include "Line.h"


Line::Line(int _X, int _Y, int _R , COLORREF _ColorLine)
{
	X = _X;
	Y = _Y;
	R = _R;

	X1 = X;
	Y1 = Y;
	X2 = X1;
	Y2 = Y1 - R;
	ColorLine = _ColorLine;
}

void Line::draw()
{
	ColorLine = RGB(0, 255, 0);
	pen = CreatePen(PS_SOLID, 2, ColorLine);
	
	SelectObject(hdc, pen);

	POINT points[] = { {X1, Y1} , {X2 , Y2} };
	Polygon(hdc, points, 2);

	DeleteObject(pen);
}

void Line::hide()
{
    RECT rct = { X1 - 1 , Y1 + 1, X1 + 1, Y2 - 1 };
	InvalidateRect(hwnd, &rct, 1);
}