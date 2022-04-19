#include "Square.h"

Square::Square(int _X, int _Y, int _R , COLORREF _ColorSquare)
{
	X = _X;
	Y = _Y;
	R = _R;
	ColorSquare = _ColorSquare;
};

void Square::draw()
{

	pen = CreatePen(PS_SOLID, 2, RGB(255, 162, 0));
	brush = CreateSolidBrush(ColorSquare);

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	Rectangle(hdc, X - R, Y - R, X + R, Y + R);

	DeleteObject(pen);
	DeleteObject(brush);
}

void Square::hide()
{
	RECT rct = {X - R - 1 , Y - R - 1, X + R + 1, Y + R + 1};
	InvalidateRect(hwnd, &rct, 1);
}

void Square::move(int _X, int _Y)
{
	Figure::move(_X, _Y);
}