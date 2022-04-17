#include "Line.h"


Line::Line(int _X, int _Y, int _R , COLORREF _ColorLine)
{
	X1 = _X;
	Y1 = _Y;
	R = _R;
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