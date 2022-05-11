#include "Square.h"

Square::Square(int _X, int _Y, int _R)
{
	X = _X;
	Y = _Y;
	R = _R;
};

void Square::draw()
{
	if (X - R <= rt.left)
		throw Border("Square " , "exit on the left");

	if (X + R >= rt.right)
		throw Border("Square ", "exit on the right");

	if (Y - R <= rt.top)
		throw Border("Square ", "exit from the top");

	if (Y + R >= rt.bottom)
		throw Border("Square ", "exit from the bottom");
	

	pen = CreatePen(PS_SOLID, 2, RGB(255, 162, 0));
	brush = CreateSolidBrush(RGB(218, 255, 255));

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