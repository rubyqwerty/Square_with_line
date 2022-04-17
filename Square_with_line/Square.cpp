#include "Square.h"

Square::Square(int _X, int _Y, int _R , COLORREF _ColorSquare)
{
	R = _R * 2;
	X1 = _X - R / 2;
	Y1 = _Y - R / 2;
	X2 = X1 + R;
	Y2 = Y1 + R;
	ColorSquare = _ColorSquare;
};

void Square::draw()
{
	pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0)); 
	brush = CreateSolidBrush(ColorSquare);

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	Rectangle(hdc, X1, Y1, X2, Y2);

	DeleteObject(pen);
	DeleteObject(brush);
}