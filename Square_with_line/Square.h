#pragma once

#include "Figure.h"

class Square : public Figure {

private:

	int X1;
	int Y1;
	int X2;
	int Y2;
	int R;

public:

	Square(int _X, int _Y, int _R);

	void draw() override;

};