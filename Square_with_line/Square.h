#pragma once

#include "Figure.h"

class Square : public Figure {

private:
	int X1;
	int Y1;
	int X2;
	int Y2;
	COLORREF ColorSquare;

public:
	Square(int, int, int, COLORREF = RGB(131, 163, 255));
	void draw() override;
	void hide() override;
};