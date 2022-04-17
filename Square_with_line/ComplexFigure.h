#pragma once

#include "Figure.h"
#include "Line.h"
#include "Square.h"


class ComplexFigure : public Figure {

private:

	int X;
	int Y;
	int R;
	Line* line;
	Square* square;

public:

	ComplexFigure(int _X, int _Y, int _R);
	~ComplexFigure();
	void draw() override;

};