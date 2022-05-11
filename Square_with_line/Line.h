#pragma once

#include "Figure.h"

class Line : public Figure {

public:
	Line(int, int, int);
	void draw() override;
	void hide() override;
	void move(int, int) override;
};
