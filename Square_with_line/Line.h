#pragma once

#include "Figure.h"

class Line : public Figure {

private:
	COLORREF ColorLine;

public:
	Line(int, int, int, COLORREF = RGB(255, 162, 0));
	void draw() override;
	void hide() override;
	void move(int, int) override;
};
