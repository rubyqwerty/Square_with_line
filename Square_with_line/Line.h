#pragma once

#include "Figure.h"

class Line : public Figure {

private:

	int X1;
	int Y1;
	int X2;
	int Y2;
	int R;

public:

	Line(int, int, int);

	void draw() override;

};
