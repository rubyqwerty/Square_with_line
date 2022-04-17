#pragma once

#include "Figure.h"

class Line : public Figure {

private:

	int X1;
	int Y1;
	int X2;
	int Y2;
	int R;
	COLORREF ColorLine;

public:

	Line(int, int, int, COLORREF = RGB(0,0,0));

	void draw() override;

};
